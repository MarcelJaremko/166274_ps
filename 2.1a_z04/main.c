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
printf("Podaj liczb?e elementow: ");
int n;
scanf("%d", &n);
if (n <= 0 || n > N) {
printf("Liczba element?w musi byc z przedzia?u [1, %d\n]!", N);
return 1;
}
generuj(tab,n,100);
wypisz(tab, n);
collatz(tab, n);
printf("\n");
wypisz(tab, n);

return 0;
}

void generuj(short tab[], int n, short przedzial)
{
  srand(time(0));
    for (int i = 0; i < n; ++i)
    {
        tab[i] = rand() % przedzial;
    }

}



void wypisz(const short tab[], int n)
{

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", tab[i]);
    }

}



void collatz(short tab[], int n)
{
    for (int i = 0; i < n; ++i)
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


    }


}


