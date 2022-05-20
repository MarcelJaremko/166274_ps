#include <stdio.h>
#include <stdlib.h>
#include "linesegment.h"
#include "point.h"
#include "Triangle.h"
#include "DigitalClock.h"
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
    moveee(&odc1,3,4);
    show(&odc1);
    Point tria = makePoint(3,5);
    Point trib = makePoint(8,9);
    Point tric = makePoint(12,12);
    Triangle tri1 = makeTrianglefromPoints(&tria,&trib,&tric);
    showw(&tri1);
    printf("Pole tego trojkata to: %lf\n", area(&tri1));
    movee(&tri1,6,4);
    showw(&tri1);
    DigitalClock godzina1 = makeDigitalClock(24,0);
    showtime(&godzina1);
    incrementt(&godzina1,0);
    showtime(&godzina1);
    increment(&godzina1);
    showtime(&godzina1);
    decrementt(&godzina1, 1);
    showtime(&godzina1);
    decrement(&godzina1);
    showtime(&godzina1);
    return 0;
}

