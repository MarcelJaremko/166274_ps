#include "linesegment.h"
#include "point.h"
#include <math.h>
LineSegment makeLineSegment(int ax,int ay,int bx,int by){
    LineSegment tmp;
    tmp.a.x = ax;
    tmp.a.y = ay;
    tmp.b.x = bx;
    tmp.b.y = by;
    return tmp;




}
LineSegment makeLineSegmentfromPoints(const Point *a,const Point *b){
    LineSegment tmp;
    tmp.a.x = a->x;
    tmp.a.y = a->y;
    tmp.b.x = b->x;
    tmp.b.y = b->y;
    return tmp;


}

bool parallel(const LineSegment *s1, const LineSegment *s2)
{

   double a1, a2;
    a1 = (s1->a.y - s1->b.y) / (s1->a.x - s1->b.x);
    a2 = (s2->a.y - s2->b.y ) / (s2->a.x - s2->b.x);
    if(a1==a2)
         printf("Odcinki sa rownolegle\n");
    else
         printf("Odcinki nie sa rownolegle\n");

}

bool perpendicular(const LineSegment *s1, const LineSegment *s2)
{
    double a1, a2;
    a1 = (s1->a.y - s1->b.y) / (s1->a.x - s1->b.x);
    a2 = (s2->a.y - s2->b.y ) / (s2->a.x - s2->b.x);
    if((a1*a2)==-1)
         printf("Odcinki sa prostopadle\n");
    else
         printf("Odcinki nie sa prostopadle\n");



}






void show(const LineSegment *s){
    printf("Poczatek odcinka to punkt: (%d,%d) \n", s->a.x, s->a.y);
    printf("Koniec odcinka to punkt: (%d,%d)  \n\n", s->b.x, s->b.y);

}

double length(const LineSegment *s)
{
    double len;
    len=sqrt((s->b.x-s->a.x)*(s->b.x-s->a.x)+(s->b.y-s->a.y)*(s->b.y-s->a.y));
    return len;
}

void moveee(LineSegment *s, int deltaX, int deltaY)
{

    s->a.x+=deltaX;
    s->a.y+=deltaY;
    s->b.x+=deltaX;
    s->b.y+=deltaY;

}
