#include <stdio.h>
#include "../4_Header_Files/shapes.h"

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

	/* Pointers are also used for structures in the same way. You will see this often in the
	UOS3 repository for things like config structures */
	Point myPoint = {3,4};		/* Create a point structure using the shape.h include */ 
	Point* point_pointer;		/* This creates a pointer to a Point strucure */
	point_pointer = &myPoint;	/* This sets the pointer to the location of our Point struct */

	int x_temp;
	/* How we would access the Point structure values directly */
	x_temp = myPoint.x;
	printf("x_temp direct access: %i\n", x_temp);

	/* *(point_pointer) means the value at point_pointer's pointed to location, so it is the 
		same as myPoint. Therefore, this is the same as the assignment above. This is
		called dereferencing a pointer. */
	x_temp = (*(point_pointer)).x;
	printf("x_temp access via pointer: %i\n", x_temp);

	/* We programmers are lazy, so instead of typing that mess, there is a special operator (->)
		for returning structure elements DIRECTLY when passed a pointer. Another statement
		that matches the prevous two is as follows: */
	x_temp = point_pointer->x;
	printf("x_temp with pointer -> operator: %i\n", x_temp);

}
