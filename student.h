#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

#include "osoba.h"

using namespace std;

class Student : public Osoba{

private:
    int brojIndeksa;

public:
    Student(string ime, string prezime, int godinaRodjenja, int brojIndeksa);

    int getBrojIndeksa() const;
    void setBrojIndeksa(int brojIndeksa);

    // operator za ispisivanje
    friend ostream& operator<<(ostream& os, const Student& student);

    // operator za poredjenje po broju indeksa
    bool operator<(const Student& s2) const;
};

#endif