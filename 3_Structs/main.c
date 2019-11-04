#include <stdio.h>

/* Point structure (the complicated way) */
struct point {
	int x;
	int y;
};

typedef struct point Point;

/* Rectangle structure (the quick way) */
typedef struct {
	Point a;
	Point b;
} Rect;

void print_rectangle_details(Rect in_rect);

void print_rectangle_details(Rect in_rect) {
	printf("Rectangle struct has point a at %i, %i\n", in_rect.a.x, in_rect.a.y);
        printf("\t\tand point b at %i, %i\n", in_rect.b.x, in_rect.b.y);
}

void main (void) {
	/* structure fields can be assigned immediately */
	Point testpoint1 = {3,4};
	printf("Testpoint 1: %i,%i\n", testpoint1.x, testpoint1.y);

	/* They can also be assigned and changed at runtime */
	Point testpoint2;
	testpoint2.x = 5;
	testpoint2.y = 8;
	printf("Testpoint 2: %i,%i\n", testpoint2.x, testpoint2.y);

	/* Similarly, structs within structs can use already defined sub-structures */
	Rect testRect;
	testRect.a = testpoint1;
	/* Or directly assigned values */
	testRect.b = (Point) {8,9};

	/* Structures can also be passed to functions as values */
	print_rectangle_details(testRect);
	
	/* Now try to create a triangle structure containing 3 'Point' fields, and a function to print
		out the details of the triangle coordinates */
	
}
