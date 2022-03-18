#include <stdio.h>
#include <stdlib.h>
//Napisz program, który wczytuje ze standardowego wejœcia wspó³czynniki równania kwadratowego z jedn¹ niewiadom¹ i wypisuje na standardowym wyjœciu wszystkie rozwi¹zania rzeczywiste tego równania
//lub odpowiedni¹ informacjê w przypadku braku rozwi¹zañ.
int main()
{
    float a,b,c;
    float x0,x1,x2,delta;
    printf("Podah wspolczynniki: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    delta=(b*b)-(4*a*c);
    x0= (b*(-1))/(2*a);
    x1= ((b *(-1)) - sqrt(delta))/(2*a);
    x2= ((b *(-1)) + sqrt(delta))/(2*a);


    if(a==0)
        printf("To nie jest rownanie kwadratowe\n");
    else{


    if(delta==0)

printf("x0=: %f", x0);
    else if (delta >0)
    printf("x1=: %f\n", x1);
    printf("x2=: %f\n", x2);


    }
    return 0;


}
