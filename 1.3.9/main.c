#include <stdio.h>
#include <stdlib.h>
//Napisz program kalkulator, kt�ry wykonuje wybran� przez u�ytkownika operacj� arytmetyczn� na dw�ch wczytanych liczbach. Program
//powinien wczytywa� dane ze standardowego wej�cia i wypisywa� wynik na standardowym wyj�ciu.

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
