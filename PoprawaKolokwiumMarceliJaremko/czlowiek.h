#ifndef CZLOWIEK_H
#define CZLOWIEK_H
#define MAX_LEN 50
#include<stdio.h>
#include<stdlib.h>

/*
Zdefiniuj sta�� MAX_LEN r�wn� 50, a nast�pnie zdefiniuj C-struktur� Czlowiek o polach
* imie typu char[MAX_LEN-1],
* nazwisko typu char[MAX_LEN-1]
* adres typu char[MAX_LEN-1]
* pesel typu unsigned long long.
Zdefiniuj nast�puj�ce funkcje:
*/


typedef struct Czlowiek {
    char imie[MAX_LEN-1];
    char nazwisko[MAX_LEN-1];
    char adres[MAX_LEN-1];
    unsigned long long pesel;

    } Czlowiek;

Czlowiek init (const char *imie, const char *nazwisko, const char *adres, const unsigned long long pesel);

void show(const Czlowiek *komp);
#endif
