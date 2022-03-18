#include <stdio.h>
#include <stdlib.h>
//Napisz program kalkulator, który wykonuje wybran¹ przez u¿ytkownika operacj¹ arytmetyczn¹ na dwóch wczytanych liczbach. Program
//powinien wczytywaæ dane ze standardowego wejœcia i wypisywaæ wynik na standardowym wyjœciu.

int main()
{
    float a,b;
    float suma=0;
    char wybor;

    printf("Podaj dwie liczby \n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("Podaj jaka operacje chcesz wykonac \n");
    scanf("\n%c", &wybor);
    switch(wybor)
{


        case '+':
        suma= a+b;
        printf("%f", suma);
        break;

       case '-':

       suma= a-b;
        printf("%f", suma);
        break;

      case '*':

       suma= a*b;
        printf("%f", suma);
        break;

       case '/':

        suma= a/b;
        printf("%f", suma);
        break;
    }




    return 0;
}
