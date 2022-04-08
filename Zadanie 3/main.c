#include <stdio.h>
#include <stdlib.h>
int ile_cyfr(int);
int main()
{
    int n;
    if(n<0)
    {
        printf("liczba musi byc wieksza od 0!!! ");
        return 0;
    }
    printf("Wprowadz liczbe: \n");
    scanf("%d", &n);
    printf("liczba sklada sie z : %d liczb" ,ile_cyfr(n));
    return 0;
}
int ile_cyfr(int n)
{
    int wynik=0;
    while(n!=0)
    {
       n/=10;
    wynik++;

    }

    return wynik;








}
