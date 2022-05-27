#include <stdio.h>
#include <string.h>
#include "nauczyciel.h"
Nauczyciel makeNauczyciel(const char *nazwisko, const char *imie, int pensum, double pensja, bool czyDyplomowany) {
    Nauczyciel tmp;
    strcpy(tmp.nazwisko,nazwisko);
    strcpy(tmp.nazwisko,imie);
    tmp.pensum = pensum;
    tmp.pensja = pensja;
    tmp.czyDyplomowany = czyDyplomowany;
    return tmp;

}

Nauczyciel makeNauczycielCopy(const Nauczyciel *naucz) {
    Nauczyciel tmp;
    strcpy(tmp.nazwisko,naucz->nazwisko);
    strcpy(tmp.nazwisko,naucz->imie);
    tmp.pensum = naucz->pensum;
    tmp.pensja = naucz->pensja;
    tmp.czyDyplomowany = naucz->czyDyplomowany;
    return tmp;

}

void podwyzka(Nauczyciel *naucz, float inflacja){
     naucz->pensja=naucz->pensja*inflacja;


}


void podwyzkaPensum(Nauczyciel *naucz,  int ileGodzin) {
    int tmp=naucz->pensum;
    naucz->pensum+=ileGodzin;
    if(120+(naucz->pensum)>320)
    {
        printf("Wartosc przekracza maksymalna liczbe pensum");
        naucz->pensum = tmp;


    }


}

// Wyœwietla dane Nauczyciela
void show(const Nauczyciel *naucz) {
       if(naucz->czyDyplomowany==false)
        {

        printf("\n nazwisko: %s",naucz->nazwisko);
        printf("\n imie: %s",naucz->imie);
        printf("\n pensja: %lf",naucz->pensja);
        printf("\n pensum: %d",naucz->pensum);
        printf("\n czyDyplomowany: Mianowany");
        }
        else
        {
            printf("\n nazwisko: %s",naucz->nazwisko);
        printf("\n imie: %s",naucz->imie);
        printf("\n pensja: %lf",naucz->pensja);
        printf("\n pensum: %d",naucz->pensum);
        printf("\n czyDyplomowany: Mianowany");
        }
}
    /* Funkcja powinna wyœwietlac:
    Nazwisko: Kowalski
    Imiê: Jan
    Pensja: 3500 z³
    Wzrost: 2,01 m
    Stanowisko: Dyplomowany

    albo

    Nazwisko: Kowalski
    Imiê: Jan
    Pensja: 3500 z³
    Wzrost: 2,01 m
    Stanowisko: Mianowany

    W zaleznosci od pola czyManager
    */





