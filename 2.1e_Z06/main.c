#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generuj(short tab[], int , short );
void wypisz(const short tab[], int );
void collatz(short tab[], int );
#include <time.h>
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
generuj(tab,n,100);
wypisz(tab, n);
printf("\n");
wypisz(tab, n);
int ileMaksymalnych(const short [],int);
printf("\n");

printf("Elementy maksymalne: %d\n", ileMaksymalnych(tab, n));
return 0;
}

void generuj(short tab[], int n, short przedzial)
{
  srand(time(0));
    for (short *p = tab; p < tab + n; ++p)
    {
        *p = rand() % przedzial;
    }

}


void wypisz(const short tab[], int n)
{

    for (const short *p =tab ;  p < tab + n; ++p)
    {
        printf("%d ", *p);
    }

}



int ileMaksymalnych(const short tab[],int n)
{
    int maksymalne=0, ile=0;
    for (const short *p =tab ;  p < tab + n; ++p)
    {
        if(*p>maksymalne)
        {
            maksymalne=*p;
            ile=0;
        }
        if(*p==maksymalne)
            ile++;
    }
    return ile;
}
