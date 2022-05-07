#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
void przepisz(char *slowo1,char *slowo2);
void przepisz2(const wchar_t *slowo3,wchar_t *slowo4);

int main()
{
    char slowo1[]="napis";
    char slowo2[10];
    wchar_t slowo3[]=L"napis";
    wchar_t slowo4[10];

    przepisz(slowo1,slowo2);
    przepisz2(slowo3,slowo4);
    printf("%s\n", slowo2);
    wprintf(L"%ls\n", slowo4);

}



void przepisz(char *slowo1,char *slowo2)
{

int i=0;
while(slowo1[i]!=0)
{

    slowo2[i]=slowo1[i];
    i++;


}







}
void przepisz2(const wchar_t *slowo3,wchar_t *slowo4)
{
    int i =0;
    while(slowo3[i]!=0)
    {
        slowo4[i]=slowo3[i];
        i++;
    }




}


