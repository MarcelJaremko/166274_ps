#include <stdio.h>
#include <stdlib.h>
int porownaj(char *slowo1,char *slowo2);
int porownaj2(wchar_t *slowo3,wchar_t *slowo4);
int main()
{
    	char slowo1[]="essa", slowo2[]="essa";
        wchar_t slowo3[]= L"essa", slowo4[]= L"essa";




        int wynik,wynik2;


  	wynik = porownaj(slowo1, slowo2);
  	if (wynik==0)
        printf("1");
        else printf("0");

        printf("\n");

    wynik2 = porownaj2(slowo3, slowo4);
 	if (wynik2==0)
        printf("1\n");
    else printf("0\n");


    return 0;
}
int porownaj(char *slowo1,char *slowo2)
{
    int i=0;
    while (slowo1[i]==slowo2[i])
    {
          if(slowo1[i]=='\0' && slowo2[i]== '\0')
            break;
        i++;


    }
     return slowo1[i]-slowo2[i];



}


int porownaj2(wchar_t *slowo3,wchar_t *slowo4)
{
    int i=0;
    while (slowo3[i]==slowo4[i])
    {
          if(slowo3[i]=='\0' && slowo4[i]== '\0')
              break;

           i++;


   }
     return slowo3[i]-slowo4[i];



}
