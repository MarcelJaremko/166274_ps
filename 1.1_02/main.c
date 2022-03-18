#include <stdio.h>
#include <stdlib.h>


{
    double x;
    printf("Podaj liczbe\n");
    int a;
    scanf("%lf",&x);
    printf("%d", sgn(x));
    return 0;
}
int sgn(double x)
{
    if(x>0)
       return 1;
    if (x<0)
        return -1;
    else return 0;



}
