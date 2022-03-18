#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int potegowanie(int,int);
int main()
{
    int x;
    int wyk;
    printf("Podaj dodatnia liczbe ca³kowita\n");
     scanf("%d",&x);
    scanf("%d",&wyk);

    if (x<0)
        printf("Podaj prawidlowa liczbe");
    printf("%d",potegowanie(x,wyk));
    return 0;
}
int potegowanie(int x,int wyk)
{
    int i;
    int wynik;
  wynik=pow(x,wyk);

  return wynik;








}
