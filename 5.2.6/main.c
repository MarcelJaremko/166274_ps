#include <stdio.h>
#include <stdlib.h>


void copyn1(char *nap1,char *nap2,int n);
void copyn2(wchar_t *nap3,wchar_t *nap4,int n2);
int main()
{
    char nap1[]="napis";
    wchar_t nap3[]=L"napis";
    wchar_t nap4[10];
    char nap2[10];
    copyn1(nap1,nap2,5);
      printf("%s\n",nap2);
    copyn2(nap3,nap4,3);
    wprintf(L"%ls\n", nap4);
    return 0;
}
void copyn1(char *nap1,char *nap2,int n)
{

    int i=0;
   while(i<n)
    {
        nap2[i]=nap1[i];
        i++;
    }


}
void copyn2(wchar_t *nap3,wchar_t *nap4,int n2)
{

      int i=0;

   while(i<n2)
    {
        nap4[i]=nap3[i];
        i++;
    }




}

