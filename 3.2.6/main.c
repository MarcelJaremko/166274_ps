#include <stdio.h>
#include <stdlib.h>
//Napisz funkcj�, kt�rej argumentami s� n typu int oraz w wska�nik
//do int, kt�ra przepisuje warto�� n do zmiennej wskazywanej przez w
void przekaz(int*,int*);
int main()
{
    int n,w;
    scanf("%d", &n);
    przekaz(&n,&w);
    printf("po przekazaniu wartosci n = %d, w = %d", n,w);
    return 0;
}
void przekaz(int *n ,int *w)
{
    *w=*n;



}
