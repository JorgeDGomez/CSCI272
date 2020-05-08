#include "parasite.h"

Parasite::Parasite(float newReproductionRate, float newResistance) {
    reproductionRate = newReproductionRate;
    resistance = newResistance;
    cout << "Parasite is born with " << reproductionRate*100 << "% reproduction rate, and "
         << resistance*100 << "% resistance" << endl;
}

Parasite::~Parasite() {
    cout << "Parasite object is deleted" << endl;
}

float Parasite::getReproductionRate() const{
    return reproductionRate;
}

float Parasite::getResistance() const{
    return resistance;
}

ostream& operator<<(ostream& output, Parasite* p) {
    output << "This parasite has reporoduction rate: " << p->getReproductionRate()*100
         << "%, and resistance rate: " << p->getResistance()*100;
    return output;
}

// If this virus cell reproduces, returns a new offspring with identical genetic info.
// Otherwise, returns NULL.
Parasite* Parasite::reproduce(float immunity) {
    // Does the virus reproduce this time?
    if (RAND_NUM > reproductionRate) 
        return NULL; // No!
    return new Parasite(reproductionRate, resistance);
};

// Returns true if this virus cell survives, given the animal's immunity
bool Parasite::survive(float immunity) {
    // If the patient's immunity is too strong, then this cell cannot survive
    if (immunity > resistance)
        return false;
    return true;
}
