#include <stdio.h>
#include <stdlib.h>
int wskazniki(int*,int*);
int main()
{
    int a,b;
    printf("Podaj dwie liczby\n");
    scanf("%d", &a);
    scanf("%d", &b);
   printf("%d", wskazniki(&a,&b));
    return 0;
}

int wskazniki(int *a,int *b)
{
    if(*a>*b)
        return *b;
        return *a;







}
