#include <stdio.h>

int add_numbers (int num_a, int num_b);

void main (void) {
	printf("This program will test functions on integers\n\n");

	int var1 = 25;
	int var2 = 35;

	int res;

	res = add_numbers(var1, var2);
	printf("%i+%i=%i\n", var1, var2, res);

	res = subtract_numbers(var1, var2);	/* Write this function to subtract argument 2 from argument 1 */
	printf("%i-%i=%i\n", var1, var2, res);
}

int add_numbers (int num_a, int num_b) {
        int result = num_a + num_b;
        return result;
}
