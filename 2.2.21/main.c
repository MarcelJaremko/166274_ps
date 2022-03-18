#include <stdio.h>
#include <stdlib.h>
int ciag(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",ciag(n));
    return 0;
}
int ciag(int n) // nasze A
{

    if (n==0) // A z n= 0
        return 1;
    else
        return 2*ciag(n-1)+5;





}
