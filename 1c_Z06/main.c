#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
const int N = 1000;
int n;
int i,lewy,prawy,tmp,pom;
short tab[N];
int przedzial = 100;
printf("Podaj liczbe elementow: ");
scanf("%d", &n);

if (n <= 0 || n > N)
{
    printf("Liczba elementów musi byc z przedzia³u [1, %d\n]!", N);
    return 1;
}

srand(time(0));
    for (short *p = tab; p < tab + n; ++p)
    {
       *p = rand() % przedzial;
        printf("%d ", *p);
    }
printf("\n");
// modyfikacje
for (short *p = tab+lewy; p<tab+prawy ;++p)
    {
        short *i=tab +prawy;
        tmp = *p;
        *p=*i;
        *i=tmp;
        prawy--;
        printf("%d ", *p);
    }


    printf("\n");

return 0;
}
