#include <stdio.h>

/* In C, a function must have been declared to the compiler before it can be used in the user
	program. Below is a definition for a function at the bottom of the file. The inputs (two
	integers num_a and num_b) and output data type (int) are specified.

	If this was not here, the call to add_numbers() in main() would fail. Typically these are
	found in headers for public functions, but more on that later */
int add_numbers (int num_a, int num_b);

/* This is the main function that will be run first by the program. There must always be a main().
	Currently it is specified with 'void' for the inputs and outputs, which means there are no
	expacted values for either.
*/
void main (void) {
	printf("This program will test functions on integers\n\n");

	int var1 = 25;		/* Two test integerst are created with values */
	int var2 = 35;

	/* An integer to store the result in is created with no assigned value */
	int res;

	res = add_numbers(var1, var2);	/* The variable res is set to the return value of the function */

	printf("%i+%i=%i\n", var1, var2, res);	/* Print out inputs and outputs */

	/* TASK: uncomment two lines below after creating a subtract function that takes two integer
		inputs and outputs an integer result. Call the function 'subtract_numbers', and make
		sure it has a declaration at the top so that the main function can see it. */
	//res = subtract_numbers(var1, var2);		/* Write this function */
	//printf("%i-%i=%i\n", var1, var2, res);	/* Print out inputs and result to console */
}

int add_numbers (int num_a, int num_b) {
        int result = num_a + num_b;
        return result;
}
