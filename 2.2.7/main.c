#include <stdio.h>
#include <stdlib.h>
//n do potegi m
int potegowanie(int,int);
int main()

{
    int n,m;
    printf("Podaj liczby, co najmniej jedna musi byæ rozna od zera\n");
    scanf("%d",&n);
    scanf("%d",&m);
    if (n==0 && m==0)
        printf("Conajmniej jedna liczba musi byæ rozna od zera");

        else

         printf("%d",potegowanie(n,m));
    return 0;
}
int potegowanie(int n,int m)
{

    int wynik;
  wynik=pow(n,m);

  return wynik;
}

