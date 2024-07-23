#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
#include <fstream>
#include <utility>

#include "student.h"
#include "profesor.h"
#include "kurs.h"

using namespace std;

template<typename T>
void ispis(vector<T> niz);

void ispisStudenataUFajl(vector<Student> studenti);

void napraviParove(vector<Student> studenti, vector<Kurs> kursevi);

int main() {
    
    // 1.
    Kurs vestackaInteligencija("Vestacka inteligencija", 6);
    Kurs objektnoPropgramiranje1("Napredno programiranje", 8);
    Kurs matematika("Matematika", 4);

    Profesor* jovan = new Profesor("Jovan", "Jovanovic", 1970);
    jovan->dodajPredmet(vestackaInteligencija);
    jovan->dodajPredmet(objektnoPropgramiranje1);
    jovan->dodajPredmet(matematika);

    ispis(jovan->getPredmeti());
    cout << endl;

    // 2.
    vector<Student> studenti = {
        Student("Marko", "Markovic", 2002, 12422),
        Student("Petar", "Peric", 2003, 32422), 
        Student("Nikola", "Nikolic", 2001, 10022), 
        Student("Masa", "Maric", 2001, 12322)
    };

    ispisStudenataUFajl(studenti);
    ispis(studenti);
    cout << endl;
    
    // 3.
    napraviParove(studenti, jovan->getPredmeti());
    cout << endl;

    // 4. 
    // unos i ispis n studenta
    int n;
    cout << "Unesite broj studenata:" << endl;
    cin >> n;

    if (n >= 0) {
        string ime, prezime;
        int indeks, godina;
        studenti.clear();

        for (int i = 0; i < n; i++) {
            cout << "Unesite ime, prezime, godinu rodjenja i indeks studenta: " << endl;
            cin >> ime >> prezime >> godina >> indeks;
            Student s(ime, prezime, godina, indeks);

            bool postoji = false;
            for (auto& s2 : studenti) {
                if (s2.getBrojIndeksa() == indeks) {
                    postoji = true;
                    break;
                }
            }
            if (!postoji) 
                studenti.push_back(s);
        }

        ispis(studenti);
        cout << endl;
    }
    else {
        cout << "greska" << endl;
    }
    

    // 5.
    // kreiranje kursa
    cout << "Unesite naziv kursa i espb" << endl;
    string naziv;
    int espb;
    cin >> naziv >> espb;
    if (espb <= 0)
        cout << "losi podaci";
    else {
        Kurs* k = new Kurs(naziv, espb);
        cout << (*k) << endl;
    }


    /*Profesor p("pero", "peric", 1970);
    cout << p << endl;*/
    

    return 0;
}

template<typename T>
void ispis(vector<T> niz){
    // T moze biti bilo koja klasa, koja se moze ispisati tj ima implementiran operator <<
    stack<T> stek;

    for (auto tmp : niz)
        stek.push(tmp);

    while (!stek.empty()) {
        cout << stek.top() << endl;
        stek.pop();
    }
}

void ispisStudenataUFajl(vector<Student> studenti){
    sort(studenti.begin(), studenti.end());
    
    queue<Student> red;

    for(auto s : studenti)
        red.push(s);

    ofstream fajl("studenti.txt");

    while(!red.empty()){
        fajl << red.front() << endl;
        red.pop();
    }

    fajl.close();    
}


void napraviParove(vector<Student> studenti, vector<Kurs> kursevi) {
    int n = min(studenti.size(), kursevi.size());

    for(int i=0; i < n; i++){
        pair<Student, Kurs> p = make_pair(studenti[i], kursevi[i]);
        cout << "(" << p.first << ", " << p.second << ")" << std::endl;
    }
}