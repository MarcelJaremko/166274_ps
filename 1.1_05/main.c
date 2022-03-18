#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=6;
    int *p=&a;
    printf("%d\n", *p);
    printf("%d\n", &p);
    printf("%d\n", *&p);
    printf("%d\n", &*p);
    printf("%d\n", &a);
    printf("%d\n", *&a);


    return 0;
}
