#include <stdio.h>
#include <stdlib.h>
void copyn1(char *nap1,char *tablica);

int main()
{
    char nap1[]="napis";
    char tablica[10];
    copyn1(nap1,tablica);
    printf("%s", tablica);
    return 0;
}


void copyn1(char * nap1, char *tablica)
{
    int i=0;
    while(nap1[i]!=0)
    {
        tablica[i]=nap1[i];
        i++;
    }
    tablica[i]=0;
}

