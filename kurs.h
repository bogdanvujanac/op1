#ifndef KURS_H
#define KURS_H

#include <string>
#include <iostream>

using namespace std;

class Kurs{
private:
    string naziv;
    int ESPB;

public:
    Kurs(string naziv, int ESPB);

    string getNaziv() const;
    int getESPB() const;

    // preklapanje operatora
    friend ostream& operator<<(ostream& os, const Kurs& kurs);
};


#endif