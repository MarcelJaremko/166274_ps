#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,x;

    printf("Podaj liczby");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);

    if(fabs((a)*(x*x)+b*x+c)>d)
        x++;
        printf("wypisuje na standardowe wyjscie najmniejsza nieujemna liczbe %f\n", x);




    if((5*(x*x)+a*x+b)<c)
        x++;
   printf("wypisuje na standardowe wyjscie najwieksz¹ nieujemna liczbe calkowita %f\n", x);




    return 0;
}
