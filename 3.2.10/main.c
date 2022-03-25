#include <stdio.h>
#include <stdlib.h>

//Napisz bezargumentow¹ funkcjê,
//która rezerwuje pamiêæ dla pojedynczej zmiennej typu double i zwraca jako wartoœæ wskaŸnik do niej.
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
