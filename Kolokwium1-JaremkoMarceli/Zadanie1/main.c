#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Wczytaj liczbe N\n: ");
    int n;
    scanf("%d",&n);
    double liczby[n];
    int Ldodatnia=0;
    int Podloga5 = 0;
    if(n<=0){
         printf("N musi byc wieksze od 0!!!");
         return 0;
    }


    for (int i =0; i<n ;++i)
    {
        scanf("%d", &liczby[i]);


    }
    printf("/////////////////////\n");

    for (int i =0; i<n ;++i)
    {
        if(liczby[i]>0)
        {
            Ldodatnia++;
        }

    }
      for (int i =0; i<n ;++i)
    {

      if((int)floor(liczby[i])%5==0)
        {
            Podloga5++;
        }

    }
        printf("Ilosc liczb dodatnich: %d\n", Ldodatnia);
        printf("Ilosc liczb Podzielnych przez 5: %d\n", Podloga5);

    return 0;
}
