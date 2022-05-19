#include <stdio.h>
#include <stdlib.h>
#include "linesegment.h"
#include "point.h"
int main()
{
    LineSegment odc1 = makeLineSegment(2,3,4,5);
    show(&odc1);
    Point a = makePoint(0,9);
    Point b = makePoint(3,9);
    Point c = makePoint(2,4);
    Point d = makePoint(3,5);
    LineSegment odc2 = makeLineSegmentfromPoints(&a,&b);
    LineSegment odc3 = makeLineSegmentfromPoints(&c,&d);
    show(&odc2);
    printf("Dlugosc odcinka: %lf\n ",length(&odc2));
    parallel(&odc2,&odc3);
    perpendicular(&odc2,&odc3);
    move(&odc1,3,4);
    show(&odc1);
    return 0;
}
