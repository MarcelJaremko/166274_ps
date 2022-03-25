#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int , short , short );
void wypisz(const short tab[], int );
int main(void)
{
const int N = 1000;
short tab[N];
printf("Podaj liczb²e elementow: ");
int n;
scanf("%d", &n);
if (n <= 0 || n > N) {
printf("Liczba elementów musi byc z przedzia³u [1, %d\n]!", N);
return 1;
}

generuj(tab,n,-99,99);
wypisz(tab, n);
printf("\n");




return 0;
}


void generuj(short tab[], int n, short minWartosc, short maxWartosc)
{
  srand(time(NULL));
    for (int i = 0; i < n; ++i)
    {
        tab[i] = (rand()%(abs(minWartosc)+abs(maxWartosc)))+ minWartosc  ;
    }

}

void wypisz(const short tab[], int n)
{

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", tab[i]);
    }

}

