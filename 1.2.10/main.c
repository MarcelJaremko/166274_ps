#include <stdio.h>
#include <stdlib.h>
//Napisz program, który wczytuje ze standardowego wejœcia liczbê wymiern¹ x i wypisuje na standardowym wyjœciu wartoœæ bezwzglêdn¹
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
