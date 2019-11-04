#include <stdio.h>

void main (void) {
	printf("This is a test program.\n");	/* Print data to the console. The \n is a newline */
	
	unsigned int my_uint = 5;		/* This  is an unsigned integer */
	int my_int = -25;			/* This is a signed integer */

	printf("Unsigned integer: %i\n", my_uint);
	printf("Signed integer: %i\n", my_int);

	printf("Input an integer>");
	scanf("%i", &my_int);		/* Assign user input to variable my_int. The & will make
						more sense when after pointers are covered. The 'i'
						specifies the type of data expected to be input.*/
	printf("User integer: %i\n", my_int);

	char my_character = 'A';	/* A char holds 1 byte representing a character in ASCII */

	char characters[3];		/* An array is specified with its type (char) and length (3) */
	/* Assignment uses the array index, starting at 0 */
	characters[0] = my_character;		/* You can use already defined chars */
	characters[1] = 'B';			/* literal chars */
	characters[2] = 67;			/* Or even the byte value for 'C' in ascii */

	/* Array access is via the same index */
	printf("my characters: %c, %c, %c\n", characters[0],
						characters[1],
						characters[2]);
}
