#include <stdio.h>

//Napisz wskaŸnikow¹ wersjê funkcji strcpyOdd. Funkcja ta ma kopiowaæ z napisu s do napisu t znaki z nieparzystych pozycji. Zadbaj o koniec napisu - NUL.
char* strcpyOdd(char *t, const char *s);


int main(void)
{
    char* kopia = calloc(50, sizeof(char));
    char napis[] = "tekst";

    strcpyOdd(kopia, napis);

    printf("%s", kopia);
}

char* strcpyOdd(char *t, const char *s)
{
    char* temp = t;

    while (*s%2!=0)
    {
        *t = *s;
        ++t;
        ++s;
    }

    *t = '\0';

    return temp;
}
