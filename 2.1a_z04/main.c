#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generuj(short tab[], int n, short przedzial);
void wypisz(const short tab[], int n);
void collatz(short tab[], int n);

int main(void)
{
const int N = 1000;
int n,i;

int tab[N];
int przedzial = 100;
printf("Podaj liczbe elementow: ");
scanf("%d", &n);

if (n <= 0 || n > N)
{
    printf("Liczba elementów musi byc z przedzia³u [1, %d\n]!", N);
    return 1;
}
generuj(tab,n,100);
wypisz(tab, n);
collatz(tab, n);
printf("\n");
wypisz(tab, n);



void generuj(short tab[], int n, short przedzial)
{
  srand(time(0));
    for (i = 0; i < n; ++i)
    {
        tab[i] = rand() % przedzial;
    }

}


printf("\n");
void wypisz(const short tab[], int n)
{

    for (i = 0; i < n; ++i)
    {
        printf("%d ", tab[i]);
    }

}

void collatz(short tab[], int n)
{
    for (i = 0; i < n; ++i)
    {
        if(tab[i]%2==1)
        {
             tab[i]= 3 *tab[i] + 1;
        } else
        {

            do
            {
                    (tab[i] /= 2);
            }

            while(tab[i]%2==0);
        }

        printf("%d ", tab[i]);
    }


}


printf("\n");

return 0;
}
