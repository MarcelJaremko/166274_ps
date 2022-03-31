
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generuj(short tab[], int , short );
void wypisz(const short tab[], int n);
void collatz(short tab[], int );
void zmien(short [],int);
void signum(short [],int);
void odwroc(short [],int,int);

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
collatz(tab, n);
printf("\n");
wypisz(tab, n);
zmien(tab, n);
wypisz(tab, n);
signum(tab, n);
wypisz(tab, n);

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



void collatz(short tab[], int n)
{
    for ( short *p =tab ;  p < tab + n; ++p)
    {
        if(*p %2==1)
        {
           *p = 3 * *p + 1;
        } else
        {

            do
            {
                    (*p /= 2);
            }

            while(*p %2==0);
        }


    }


}


void zmien(short tab[], int n)
{
for ( short *p =tab ;  p < tab + n; ++p)
    {
        if(*p%2!=0)
           *p*=2;
        else
            *p*=-1;
    }
    printf("\n");
}
void signum(short tab[], int n)
{
    for ( short *p =tab ;  p < tab + n; ++p)
    {
        if(*p>0)
           *p=1;
        if(*p<0)
            *p=-1;
    }
       printf("\n");
}

void odwroc(short tab[], int lewy, int prawy)
{
    int tmp;
    for(short *p =tab, j=prawy; (p < tab )<j;p++,j--)
    {
        tmp = *p;
        *p = tab[j];
        tab[j] = tmp;
    }
}
