#include <stdio.h>

void main (void) {
	/* A 'pointer' holds the location in memory where a variable is stored, rather
		than its actual value */

	int x = 10;	/* An integer */
	int* x_ptr;	/* A pointer to an integer (currently with no value) */

	/* A pointer must be assigned a location */

	x_ptr = &x;	/* &x means 'the location of x' */

	/* x_ptr now points to the variable x */

	printf("x: %i,\nx_ptr: %i (so x is stored in memory at %i)\n", x, x_ptr, x_ptr);

	/*  Using just the pointer, we can get back to x again: */
	int y;
	y = *x_ptr;	/* '*x_ptr' means the data found at location x_ptr, which is x */

	printf("y: %i\n", y);


	/* Pointer arithmetic is also possible: */
	int my_array[3] = {2,4,6};	/* An array of integers */
	int* arr_ptr = &my_array[0];	/* Integer pointer points to first element in array */
	
	int* arr_ptr_2 = arr_ptr + 1;	/* Points to next bit of data in memory (element 2) */
	
	printf("First element: %i\n", *arr_ptr);
	printf("Second element: %i\n", *arr_ptr_2);
}
