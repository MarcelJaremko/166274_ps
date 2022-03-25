#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generuj(short tab[], int , short );
void wypisz(const short tab[], int n;
void collatz(short tab[], int );
void zmien(short [],int);
void signum(short [],int);
void odwroc(short [],int,int);
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
void zmien(short tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(tab[i]%2!=0)
            tab[i]*=2;
        else
            tab[i]*=-1;
    }
    printf("\n");
}
void signum(short tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(tab[i]>0)
            tab[i]=1;
        if(tab[i]<0)
            tab[i]=-1;
    }
       printf("\n");
}

void odwroc(short tab[], int lewy, int prawy)
{
    int tmp;
    for(int i=lewy, j=prawy;i<j;i++,j--)
    {
        tmp = tab[i];
        tab[i] = tab[j];
        tab[j] = tmp;
    }
}
