#include <stdio.h>
#include <stdlib.h>
//npisz program wczytuj�cy ze standardowego wej�cia dwie dodatnie liczby ca�kowite n i m, i wypisuj�cy na standardowym wyj�ciu
//m pierwszych wielokrotno�ci liczby n.
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
