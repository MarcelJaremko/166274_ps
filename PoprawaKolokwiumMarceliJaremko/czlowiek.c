#include <stdio.h>
#include <string.h>
#include "czlowiek.h"

//inicjalizuje strukture Czlowiek
Czlowiek init(const char *imie, const char *nazwisko, const char *adres, const unsigned long long pesel) {

    Czlowiek tmp2;
    strcpy(tmp2.imie,imie);
    strcpy(tmp2.nazwisko,nazwisko);
    strcpy(tmp2.adres,adres);
    tmp2.pesel=pesel;

    return tmp2;

}

/*wyswietla dane o czlowieku w formacie:
Imiê: Jan.
Nazwisko: Kowalski.
Adres: Konwaliowa 5/10.
Pesel: 90061201801.
* */
void show(const Czlowiek *czlowiek) {

    printf("Imie: %s \n",czlowiek->imie);
    printf("nazwisko: %s\n",czlowiek->nazwisko);
    printf("adres: %s\n",czlowiek->adres);
    printf("%llu\n",czlowiek->pesel);
    printf("\n");


}
