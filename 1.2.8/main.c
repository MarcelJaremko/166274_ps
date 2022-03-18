#include <stdio.h>
#include <stdlib.h>
//(r,!) Napisz program, który wczytuje ze standardowego wejœcia trzy
//liczby ca³kowite i wypisuje na standardowym wyjœciu ich œredni¹ arytmmetyczn¹
int main()
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("%f",(a+b+c)/3);
    return 0;
}
