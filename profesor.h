#ifndef PROFESOR_H
#define PROFESOR_H

#include <vector>
#include "osoba.h"
#include "kurs.h"

using namespace std;

class Profesor : public Osoba {
private:
    vector<Kurs> predmeti;
    static unsigned int MAX_KURSEVA;

public:
    Profesor(string ime, string prezime, int godinaRodjenja);

    void dodajPredmet(const Kurs& kurs);
    vector<Kurs> getPredmeti();
};

#endif