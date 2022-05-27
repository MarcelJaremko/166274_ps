#include <stdio.h>
#include "nauczyciel.h"
#include <string.h>

bool czyPrawidlowaPensja (double pensja);
bool czyPrawidlowePensum (int pensum);


int main(int argc, char *argv[])
{
    // 1) Popro� u�ytkownika o wpisanie danych nauczyciela. Zabezpiecz dane! Zak�adamy, �e nauczyciel moze miec pensum z zakresu 120 do 360h, a pensja minimalna powinna by� nie mniejsza niz 3010 zl . Napisz odpowiednie funkcje sprawdzaj�ce poprawno�� danych.


            char nazwisko[MAX_LEN-1];;
            const char imie[MAX_LEN-1];;
            unsigned int tmp;
            int pensum;
            double pensja;
            float inflacja = 12.3;

            bool czyDyplomowany;
            printf("Podaj Nazwisko:\n");
            scanf("%s",&nazwisko);



            printf("Podaj Imie:\n");
            scanf("%s",&imie);



            printf("Podaj Pensum\n");
            scanf("%d",&pensum);
            if(pensum<120 || pensum>360)
                printf("Podaj poprawna wartosc( miedzy 120h albo 360h)!\n");
            while (pensum<120 || pensum>360)
            {
                 printf("Podaj Pensum\n");
            scanf("%d",&pensum);
            if(pensum<120 || pensum>360)
                printf("Podaj poprawna wartosc( miedzy 120h albo 360h)!\n");

            }

            printf("Podaj Pensje\n");
            scanf("%lf",&pensja);
            if(pensja<3010)
                 printf("Podaj poprawna wartosc(wieksza niz 3010pln)!\n");
            while(pensja<3010)
            {
            printf("Podaj Pensje\n");
            scanf("%lf",&pensja);
            if(pensja<3010)
                 printf("Podaj poprawna wartosc(wieksza niz 3010pln)!\n");


            }




            printf("Czy nauczyciel jest dyplomowany  (podaj 1 jesli tak, 0 jesli nie\n");
            scanf("%u",&tmp);
            if(tmp<0 || tmp>1)
                printf("Podaj poprawna wartosc( 1 albo 0)!\n");
            while(tmp<0 || tmp>1)
            {
                printf("Czy nauczyciel jest dyplomowany  (podaj 1 jesli tak, 0 jesli nie\n");
                scanf("%u",&tmp);
                if(tmp<0 || tmp>1)
                    printf("Podaj poprawna wartosc( 1 albo 0)!\n");


            }
            if(tmp)
                czyDyplomowany=true;

            else

                czyDyplomowany=false;

     // 2) Zainicjalizuj struktur� o nazwie prac1 wprowadzonymi danymi.

            Nauczyciel prac1 = makeNauczyciel(nazwisko,imie,pensum,pensja,czyDyplomowany);
            show(&prac1);


    // 3) Stw�rz struktur� o nazwie prac2 kopiuj�c obiekt prac1.
            Nauczyciel prac2 = makeNauczycielCopy(&prac1);
            show(&prac2);

    // 4) Stw�rz struktur� o nazwie prac3 kopiuj�c obiekt prac1.
            Nauczyciel prac3 = makeNauczycielCopy(&prac1);
            show(&prac3);

    // 5) Zmie� nazwisko nauczyciela prac1 na Kowalski
            strcpy(prac1.nazwisko, "Kowalski");

    // 6) Zmie� nazwisko nauczyciela prac2 na Nowak
             strcpy(prac2.nazwisko, "Nowak");

    // 7) Zmie� nazwisko nauczyciela prac3 na Nowakowski
             strcpy(prac3.nazwisko, "Nowakowski");

    // 8) Podwy�sz pensum nauczyciela prac2 o 100 godzin
            podwyzkaPensum(&prac2,100);
    // 9) Zmie� czyDyplomowany nauczyciela prac3 na true
            prac3.czyDyplomowany = true;
    // 10) Podnie� pensj� nauczyciela prac1 o inflacj� 12,3%
            prac1.pensja=(pensja*=inflacja)/10;
    // 11) Wypisz informacje o obiektach prac1, prac2, prac3
            show(&prac1);
            show(&prac2);
            show(&prac3);

    // 12) stw�rz tablic� o nazwie tab trzech Nauczcieli
            Nauczyciel tab[3];

    // 13) W p�tli for do przechodzenia tablicy zamiast indeks�w nale�y u�y� wska�nik�w, a ka�dy operator indeksowania nale�y zastapi� operatorem dereferencji!!
    // Przejd� tablic� i wype�nij j� nauczycielami uzywaj�c odpowiedniej funkcji.


    // 14) W p�tli for do przechodzenia tablicy zamiast indeks�w nale�y u�y� wska�nik�w, a ka�dy operator indeksowania nale�y zastapi� operatorem dereferencji!!
    // Wypisz informacje o wszystkich obiektach typu Nauczyciel znajduj�cych sie w tablicy tab

}

