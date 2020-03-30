#ifndef ANIMAL_H
#define ANIMAL_H

#include "parasite.h"
#include <iostream>
#include <vector>
using namespace std;

class Animal {

    friend ostream& operator<<(ostream&, const Animal*);

    float immunity;       // degree of immunity, in %
    vector<Parasite* > parasites; // collection of parasites

public:
    Animal(float initImmunity, int initNumViruses);
    ~Animal();

    // overloaded operator
    Parasite* operator[](int);

    float getImmunity() const;
    int getParasiteNumber() const;
    
    void addParasite(Parasite* p);
    void destroyParasites(const vector<Parasite*> &ps);

    void takeDrugs();
};

#endif
