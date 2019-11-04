#ifndef SHAPES_H
#define SHAPES_H

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

/* Add your triangle struct here */

void print_rectangle_details(Rect in_rect);

#endif
