#ifndef OSOBA_H
#define OSOBA_H

#include <iostream>

using namespace std;

class Osoba{

protected:
    string ime;
    string prezime;
    int godinaRodjenja;

public:
    Osoba(string ime, string prezime, int godinaRodjenja);
    ~Osoba();

    string getIme() const;
    string getPrezime() const;
    int getGodinaRodjenja() const;

};

#endif