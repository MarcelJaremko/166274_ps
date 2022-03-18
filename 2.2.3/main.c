#include <stdio.h>
#include <stdlib.h>
int dzielnik(int);

int main()
{
    int n;
    scanf("%d",&n);
    if (n<2)
    {
        printf("Podaj prawidlowa liczbe ( liczba musi byc wieksza od 2)");

    } else
    printf("%d\n",dzielnik(n));



    printf("Hello world!\n");
    return 0;
}
int dzielnik(int n)
{
   int k;
   k=n-1;
    while(k!=1)
    {
    if(n%k==0)
        return k;
    k--;
    }
}


