#include <stdio.h>
#include <stdlib.h>
//npisz program wczytuj¹cy ze standardowego wejœcia dwie dodatnie liczby ca³kowite n i m, i wypisuj¹cy na standardowym wyjœciu
//m pierwszych wielokrotnoœci liczby n.
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
