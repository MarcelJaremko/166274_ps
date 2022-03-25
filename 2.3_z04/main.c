#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generuj(short tab[], int , short , short );
void wypisz(const short tab[], int );
int ileDodatnich(const short tab[], int);
int ileUjemnych(const short tab[], int);
int ileZerowych(const short tab[], int);
short sumaDodatnich(const short tab[], int );
short sumaUjemnych(const short tab[], int );
int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int );
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
printf("ileDodatnich: %d\n", ileDodatnich(tab, n));
printf("ileUjemnych: %d\n", ileUjemnych(tab, n));
printf("ileZerowych: %d\n", ileZerowych(tab, n));
printf("sumaPlusow: %d\n", sumaDodatnich(tab, n));
printf("sumaUjemnych: %d\n", sumaUjemnych(tab, n));
printf("dlugoscmaksymalnegociagudodatnich: %d\n", dlugoscMaksymalnegoCiaguDodatnich(tab, n));



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
int ileDodatnich(const short tab[], int n)
{
    int dodatnie;
    for(int i=0;i<n;++i)
        if(tab[i]>0)
            dodatnie++;
    return dodatnie;

}
int ileUjemnych(const short tab[], int n)
{
     int ujemne;
    for(int i=0;i<n;++i)
        if(tab[i]<0)
            ujemne++;
    return ujemne;


}
int ileZerowych(const short tab[], int n)
{
     int zerowe;
    for(int i=0;i<n;++i)
        if(tab[i]==0)
            zerowe++;
    return zerowe;



}
short sumaDodatnich(const short tab[], int n)
{
    int sumaplusow=0;
      for(int i=0;i<n;++i)
      {
          if(tab[i]>0)
            sumaplusow= sumaplusow+ tab[i];
      } return sumaplusow;






}
short sumaUjemnych(const short tab[], int n)
{
    int sumaujemne=0;
      for(int i=0;i<n;++i)
      {
          if(tab[i]<0)
            sumaujemne= sumaujemne+ tab[i];
      } return sumaujemne;






}
int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n)
{
    int dlugosc, maks=0;
      for(int i=0;i<n;++i)
    {
            if(tab[i]>0)
                dlugosc++;

        else
        {
            if (dlugosc>maks)
                maks=dlugosc;
            dlugosc =0;

        }


    }
    return maks;


}
