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
       for (short *p = tab; p < tab + n; ++p)
    {
        *p = (rand()%(abs(minWartosc)+abs(maxWartosc)))+ minWartosc  ;
    }

}

void wypisz(const short tab[], int n)
{

    for (const short *p =tab ;  p < tab + n; ++p)
    {
        printf("%d ", *p);
    }

}


int ileDodatnich(const short tab[], int n)
{
    int dodatnie;
    for (const short *p =tab ;  p < tab + n; ++p)
        if(*p>0)
            dodatnie++;
    return dodatnie;

}
int ileUjemnych(const short tab[], int n)
{
     int ujemne;
     for (const short *p =tab ;  p < tab + n; ++p)
        if(*p<0)
            ujemne++;
    return ujemne;


}
int ileZerowych(const short tab[], int n)
{
     int zerowe;
    for (const short *p =tab ;  p < tab + n; ++p)
        if(*p==0)
            zerowe++;
    return zerowe;



}
short sumaDodatnich(const short tab[], int n)
{
    int sumaplusow=0;
      for (const short *p =tab ;  p < tab + n; ++p)
      {
          if(*p>0)
            sumaplusow= sumaplusow+ *p;
      } return sumaplusow;






}
short sumaUjemnych(const short tab[], int n)
{
    int sumaujemne=0;
   for (const short *p =tab ;  p < tab + n; ++p)
      {
          if(*p<0)
            sumaujemne= sumaujemne+ *p;
      } return sumaujemne;






}
int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n)
{
    int dlugosc, maks=0;
     for (const short *p =tab ;  p < tab + n; ++p)
    {
            if(*p>0)
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
