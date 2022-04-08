#include <stdio.h>
#include <stdlib.h>


double srednia(double,double,double);
int main()
{

    printf("Podaj liczbe x,y i z \n");
    double x,y,z;

    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);
    printf(" Srednia geometryczna wynosi: %lf", srednia(x,y,z));
    return 0;
}
double srednia(double x,double y, double z)
{
  double wynik;

  wynik = x*y*z;


  wynik=pow(wynik,(double)1/3);









  return wynik;
}
