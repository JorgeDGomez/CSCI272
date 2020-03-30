#ifndef PARASITE_H
#define PARASITE_H

#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX_PARASITE_POP 100
#define RAND_NUM ((float)rand()/RAND_MAX)

class Parasite {

    friend ostream& operator<<(ostream&, Parasite*);

    float reproductionRate; // rate of reproduction, in %
    float resistance;       // resistance against drugs, in %

public:
    Parasite(float newReproductionRate, float newResistance);
    ~Parasite();

    float getReproductionRate() const;
    float getResistance() const;

    Parasite* reproduce(float immunity);
    bool survive(float immunity);
};

#endif
