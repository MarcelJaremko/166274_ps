#include <stdio.h>
#include <stdlib.h>
//npisz program wczytujący ze standardowego wejścia dwie dodatnie liczby całkowite n i m, i wypisujący na standardowym wyjściu
//m pierwszych wielokrotności liczby n.
int main()
{
    unsigned int i,n,m;
    printf("Podaj dwie liczby: \n");
    scanf("%u",&n);
    scanf("%u",&m);
    for (i=1;i<m;++i)
        printf("%u\n", n*i);

    return 0;
}
