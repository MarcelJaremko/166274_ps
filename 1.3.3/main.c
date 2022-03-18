#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
     if(a>=b && a>=c)
        printf("A jest najwieksze: %d\n ", a);
     if(b>=a && b>=c)
        printf("B jest najwieksze: %d\n ", b);

     if(c>=a && c>=b)
        printf("C jest najwieksze: %d\n ", c);
    return 0;
}
