#include "student.h"


Student::Student(string ime, string prezime, int godinaRodjenja, int brojIndeksa)
    : Osoba(ime, prezime, godinaRodjenja), brojIndeksa(brojIndeksa) {}

int Student::getBrojIndeksa() const{
    return brojIndeksa;
}

void Student::setBrojIndeksa(int brojIndeksa){
    this->brojIndeksa = brojIndeksa;
}

ostream& operator<<(ostream& os, const Student& student) {
    os << "Ime: " << student.ime << ", Prezime: " << student.prezime << ", Broj indeksa: " << student.brojIndeksa;
    return os;
}

bool Student::operator<(const Student& s2) const{
    return brojIndeksa < s2.brojIndeksa;
}