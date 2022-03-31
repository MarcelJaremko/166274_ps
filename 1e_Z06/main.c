#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
const int N = 1000;
int n;
int i;
int tab[N];
int przedzial = 100;
int najwiekszy =0;
int ilenajwiekszy =0;

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

//modyfikacje

for (short *p = tab; p <  tab + n; ++p)
{
    if(*p>najwiekszy)
    {
        najwiekszy=*p;

    }

}
for (short *p = tab; p <  tab + n; ++p)
{
    if(najwiekszy==*p)
        ilenajwiekszy++;


}

printf("ilosc elemntow najwiekszych to: %d", ilenajwiekszy);

return 0;

}
