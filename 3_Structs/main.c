#include <stdio.h>

/* Point structure (the complicated way) */
struct point {		/* Create structure */
	int x;		/* Has 2 integer features named x and y */
	int y;
};

typedef struct point Point;	/* Create a 'type' from the struct that can be used later on in code */

/* Rectangle structure (the quick way) */
typedef struct {
	Point a;	/* Our Rect structure contains Point structures! */
	Point b;
} Rect;			/* Create struct and type in one go. You can now create 'Rect's like you
				would an integer or char */

void print_rectangle_details(Rect in_rect);	/* Declare function (good practice) */

/* This function takes a structure as an argument, so its details can be accessed  */
void print_rectangle_details(Rect in_rect) {
	printf("Rectangle struct has point a at %i, %i\n", in_rect.a.x, in_rect.a.y);
        printf("\t\tand point b at %i, %i\n", in_rect.b.x, in_rect.b.y);
}

void main (void) {
	/* structure fields can be assigned immediately */
	Point testpoint1 = {3,4};	/* Create a point and set x=3 and y=4 */
	printf("Testpoint 1: %i,%i\n", testpoint1.x, testpoint1.y);

	/* They can also be assigned and changed at runtime */
	Point testpoint2;		/* Create a point */
	testpoint2.x = 5;		/* Set point x to 5 */
	testpoint2.y = 8;		/* Set point y to 8 */
	printf("Testpoint 2: %i,%i\n", testpoint2.x, testpoint2.y);

	/* Similarly, structs within structs can use already defined sub-structures */
	Rect testRect;			/* Create a rectangle based on our custom struct */
	testRect.a = testpoint1;	/* Set point a to a point we already defined */
	/* Or directly assigned values */
	testRect.b = (Point) {8,9};	/* Set point b to x=8 and y=9 directly */

	/* Structures can also be passed to functions as values */
	print_rectangle_details(testRect);

	/* TASK: Now try to create a 'Triangle' structure containing 3 'Point' fields, and a function
		that takes a triangle as an argument to print out the details of the triangle
		coordinates.
	*/

}
