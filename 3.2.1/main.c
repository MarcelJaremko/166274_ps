#include <stdio.h>
#include <stdlib.h>
int wskazniki(int*,int*);
//Napisz funkcj� otrzymuj�c� jako argumenty wska�niki do dw�ch
//zmiennych typu int, kt�ra zwraca jako warto�� mniejsz� z liczb wskazywanych przez argumenty.
int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", wskazniki(&a,&b));
    return 0;
}
int wskazniki(int *a, int *b)
{
    if(*a>*b)
        return *b;
        return *a;


}
