#include <stdio.h>
#include <stdlib.h>

//Napisz bezargumentow� funkcj�,
//kt�ra rezerwuje pami�� dla pojedynczej zmiennej typu double i zwraca jako warto�� wska�nik do niej.
double* alokuj()
{
    return malloc(sizeof(double));
}
int main()
{
    double*p = alokuj();
    *p = 11.11;
    printf("Wartosc: %f",*alokuj());
    return 0;
}
