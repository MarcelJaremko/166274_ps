#include <stdio.h>
#include <string.h>
#include "czlowiek.h"
#include "student.h"


// inicjalizuje strukture student
Student initStudent(const Czlowiek *s, const int nrIndeksu, char *kierunek) {
    Student tmp;

    strcpy(tmp.a.imie,s->imie);
    strcpy(tmp.a.nazwisko,s->nazwisko);
    strcpy(tmp.a.adres,s->adres);
    tmp.a.pesel = s->pesel;
    tmp.nrIndeksu = nrIndeksu;
    strcpy(tmp.kierunek,kierunek);


    return tmp;
}


/*
Nie powielaj kodu, wykorzystaj funkcje z innego pliku. Cialo funkcji showStudent powinno miec max 3 linijki.

Imiê: Anna.
Nazwisko: Kowalski.
Adres: Konwaliowa 5/10.
Pesel: 90061201801.
Numer indeksu: 12345.
Kierunek: informatyka.
*/
void showStudent(const Student *s) {
    printf("%s\n",s->kierunek);
    printf("%d\n",s->nrIndeksu);
    show(&s->a);
}
