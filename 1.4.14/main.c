#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,n;
    float k;
    printf("podaj liczbe\n ");
    scanf("%f", &k);
    for(i=0;i<k;i++)
    {
        a=i*i-n*n;
        b=2*i*n;
        c=i*i+n*n;
        if(a<n && b<n && c<n && a>=1 && b>=1 && c>=1)
        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
    }
    return 0;
}
