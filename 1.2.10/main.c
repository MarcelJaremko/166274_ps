#include <stdio.h>
#include <stdlib.h>
//Napisz program, kt�ry wczytuje ze standardowego wej�cia liczb� wymiern� x i wypisuje na standardowym wyj�ciu warto�� bezwzgl�dn�
//z x

int main()
{
    int n1;
    printf("Enter a number\n");
    scanf("%d",&n1);

    n1=abs(n1);
    printf("Liczba bezwzgledna = %d\n", n1);

    return 0;
}
