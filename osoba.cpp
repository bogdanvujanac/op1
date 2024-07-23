#include "osoba.h"

Osoba::Osoba(string ime, string prezime, int godinaRodjenja)
        : ime(ime), prezime(prezime), godinaRodjenja(godinaRodjenja) {}

string Osoba::getIme() const { 
    return ime; 
}

string Osoba::getPrezime() const { 
    return prezime; 
}

int Osoba::getGodinaRodjenja() const { 
    return godinaRodjenja; 
}

Osoba::~Osoba(){
    
}