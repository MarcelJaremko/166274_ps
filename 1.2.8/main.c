#include <stdio.h>
#include <stdlib.h>
//(r,!) Napisz program, kt�ry wczytuje ze standardowego wej�cia trzy
//liczby ca�kowite i wypisuje na standardowym wyj�ciu ich �redni� arytmmetyczn�
int main()
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("%f",(a+b+c)/3);
    return 0;
}
