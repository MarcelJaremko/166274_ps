#include <stdio.h>
#include <stdlib.h>
int wskazniki(int*,int*);
//Napisz funkcjê otrzymuj¹c¹ jako argumenty wskaŸniki do dwóch
//zmiennych typu int, która zwraca jako wartoœæ mniejsz¹ z liczb wskazywanych przez argumenty.
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
