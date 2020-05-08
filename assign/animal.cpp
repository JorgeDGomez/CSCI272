#include <algorithm>
#include "animal.h"

Animal::Animal(float initImmunity, int initNumParasiteCells) :
               immunity(initImmunity) {
    //randomly generate virus resistance and reproduction rate, between 0.0 and 1.0
    for (int i=0; i<initNumParasiteCells; ++i){        
        addParasite( new Parasite{RAND_NUM, RAND_NUM} );
    }
    cout << "Animal object is created" << endl;
}

Animal::~Animal() {
    // delete parasite objects fromthe animal object
    for (int i=0; i<getParasiteNumber(); ++i)
        delete parasites[i];
    parasites.resize(0);
    cout << "Animal object is deleted" << endl;
}

Parasite* Animal::operator[](int i) {
    // check it index within the range
    if(i >= 0 && i < getParasiteNumber())
        return parasites[i];
    return nullptr;
}

float Animal::getImmunity() const{
    return immunity;
}

int Animal::getParasiteNumber() const{
    return parasites.size();
}

ostream& operator<<(ostream& output, const Animal* a) {
    output << "This animal has immunity rate: " << (a->immunity*100)
           << "%, and " << (a->getParasiteNumber()) << " parasites";
    return output;
}

// Boost immunity every time when the drugs are taken
void Animal::takeDrugs() {
    if ((immunity >= 0.0) && (immunity < 1.0))
        immunity = immunity + 0.1;
};

// Add a new parasite to the animal
void Animal::addParasite(Parasite* p) {
    parasites.push_back(p);
};

// Destroy the i-th parasite in the animal
void Animal::destroyParasites(const vector<Parasite*> &ps) {
    for(auto curr : ps) {
        parasites.erase(remove(parasites.begin(), parasites.end(), curr), parasites.end());
    }
};
