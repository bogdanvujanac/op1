#include "profesor.h"

unsigned int Profesor::MAX_KURSEVA = 10;

Profesor::Profesor(string ime, string prezime, int godinaRodjenja)
        : Osoba(ime, prezime, godinaRodjenja) {}

void Profesor::dodajPredmet(const Kurs& kurs) { 
    if(predmeti.size() >= Profesor::MAX_KURSEVA)
        return;
    else
        predmeti.push_back(kurs);
}

vector<Kurs> Profesor::getPredmeti(){
    return predmeti;
}