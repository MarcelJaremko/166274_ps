#include <stdio.h>
#include <stdlib.h>
void zamiana (int*,int*);
//Napisz funkcj� otrzymuj�c� jako argumenty wska�niki do dw�ch zmiennych typu int,
// ktora zamienia ze sob� warto�ci wskazywanych zmiennych tylko wtedy, gdy wskazywana przez drugi argument zmienna mniejsza od zmiennej wskazywanej przez pierwszy argument.
int main()
{
    int a,b;
    printf("Podaj 2 liczby\n");
    scanf("%d", &a);
    scanf("%d", &b);

    zamiana(&a,&b);
    printf("po zamianie a = %d, b = %d", a,b);
    return 0;
}
void zamiana(int *a,int *b)
{
    int zmien;
    if (*a>*b)
    {
       zmien=*a;
       *a=*b;
       *b=zmien;

    }








}
