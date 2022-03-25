#include <stdio.h>
#include <stdlib.h>
//Napisz funkcjê, której argumentami s¹ n typu int oraz w wskaŸnik
//do int, która przepisuje wartoœæ n do zmiennej wskazywanej przez w
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
