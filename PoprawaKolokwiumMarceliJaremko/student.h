#ifndef STUDENT_H
#define STUDENT_H


/*
Zdefiniuj C-struktur� Student o polach
* a typu Czlowiek,
* nrIndeksu typu int
* kierunek typu char[MAX_LEN-1]
Zdefiniuj nast�puj�ce funkcje:
*/

typedef struct Student {
    Czlowiek a;
    int nrIndeksu;
    char kierunek[MAX_LEN-1];
} Student;

Student initStudent(const Czlowiek *s, const int nrIndeksu, char *kierunek);

void showStudent(const Student *s);


#endif
