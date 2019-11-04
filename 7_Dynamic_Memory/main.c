#include <stdio.h>
#include <stdlib.h>

/* Malloc is the function used in C to dynamically allocate batches of memory. It is part of the
	stdlib.h library, so this must be included above */

void main (void) {
	int * int_array;	/* Declare a pointer to an integer */

	/* Allocate 100 integer-sized blocks from free memory */
	int_array = malloc(100 *sizeof(int));	/* This 100 can be as large as you want if there is space */
	printf("Allocated memory starting at %u\n", int_array);	/* Print out first address (unsigned) */

	/* The return value is a pointer to the first address in memory we have been allocated,
		but it may not have been successful! If there was not enough memory or there was
		some other failure, the pointer will have been alloceted NULL (so it will point to
		the address 0 at the start of memory. If we try to use it there will be a crash,
		so it should ALWAYS be checked */
	if (int_array == NULL) {
		return;	/* Exit program early */
	}

	/* Now we have our memory, we can begin to use it. Since an array in C is actually a 
		block of the same data type concurrently stacked in memory, we can access the
		new data space as we would an array. Effectively, we have dynamically allocated
		an array of integers with a size of 100 elements */
	int_array[0] = 5;
	int_array[99] = 70;
	printf("element 0: %i, element 99: %i\n", int_array[0] ,int_array[99]);

	/* When we are done with dynamically allocated memory, the space should be freed so it can
		be allocated again later on if needed. This is done with the free() function, which
		automatically keeps track of the block of memory that was originally allocated to
		the pointer returned from malloc. Once the function has been passed the pointer we
		were given from malloc, the memory it points to is no longer ours. Therefore, it is
		customary to point the pointer back to NULL to avoid confusion (another reason you
		should always check for NULL pointers before trying to use them */
	free(int_array);	/* Memory is now in the free pool for re-allocation */
	int_array = NULL;	/* Return pointer to NULL */

	printf("Pointer now points to %u\n", int_array);
}
