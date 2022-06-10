#ifndef CZLOWIEK_H
#define CZLOWIEK_H
#define MAX_LEN 50
#include<stdio.h>
#include<stdlib.h>

/*
Zdefiniuj sta³¹ MAX_LEN równ¹ 50, a nastêpnie zdefiniuj C-strukturê Czlowiek o polach
* imie typu char[MAX_LEN-1],
* nazwisko typu char[MAX_LEN-1]
* adres typu char[MAX_LEN-1]
* pesel typu unsigned long long.
Zdefiniuj nastêpuj¹ce funkcje:
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
