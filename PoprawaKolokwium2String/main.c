#include <stdio.h>

//Napisz wskaŸnikow¹ wersjê funkcji strcatParzyste. Funkcja ta ma dolaczac co drugi znak (myslac jak o indeksacji czyli 0, 2, 4....) z napisu strFrom do napisu strTo. Zadbaj o koniec napisu - NUL.
char *strcat (char* strTo, const char*strFrom );



int main(void)
{
    char* kopia = calloc(100, sizeof(char));
    char napis[] = "Kocham Informatyke";  //0-K,2-C

    strcat(kopia, napis);

    printf("%s", kopia);
}

char* strcat(char *strTo, const char *strFrom)
{
    char* tmp = strTo;

    while (*strFrom)
    {
        *strTo = *strFrom;
        ++strTo;
        strFrom += 2;
    }

    *strTo = '\0';

    return tmp;
}
