#include <stdio.h>
#include "shapes.h"

void main (void) {
	/* This is the same rectangle as before */
	Rect testRect;
        testRect.a = (Point) {3,4};
        testRect.b = (Point) {8,9};
        print_rectangle_details(testRect);

	/* Now add your triangle declaration and call your triangle printout function.
		It should be read from the other file! */
}
