#include <stdio.h>
#include "shapes.h"

void print_rectangle_details(Rect in_rect) {
        printf("Rectangle struct has point a at %i, %i\n", in_rect.a.x, in_rect.a.y);
        printf("\t\tand point b at %i, %i\n", in_rect.b.x, in_rect.b.y);
}

/* Add your triangle printout function here */
