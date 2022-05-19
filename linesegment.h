
#ifndef LINESEGMENT_H
#define LINESEGMENT_H
#include <stdbool.h>
#include "point.h"
typedef struct LineSegment {
    Point a;
    Point b;


} LineSegment;

LineSegment makeLineSegment(int ax,int ay,int bx,int by);
LineSegment makeLineSegmentfromPoints(const Point *a,const Point *b);
bool parallel(const LineSegment *s1, const LineSegment *s2);
bool perpendicular(const LineSegment *s1, const LineSegment *s2);
void move(LineSegment *s, int deltaX, int deltaY);
void show(const LineSegment *s);
double length(const LineSegment*s);

#endif //LINESEGMENT_H
