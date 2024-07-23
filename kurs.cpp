#include "kurs.h"

Kurs::Kurs(string naziv, int ESPB)
    : naziv(naziv), ESPB(ESPB) {}

string Kurs::getNaziv() const{ 
    return naziv; 
}

int Kurs::getESPB() const{ 
    return ESPB; 
} 

ostream& operator<<(ostream& os, const Kurs& kurs) {
    os << "Naziv kursa: " << kurs.naziv << ", ESPB: " << kurs.ESPB;
    return os;
}