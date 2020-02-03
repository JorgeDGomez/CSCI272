#include <iostream>
using namespace std;

// Parasite Class
class Parasite {

    float reproductionRate; // rate of reproduction, in %
    float resistance;       // resistance against drugs, in %

public:
    Parasite(float newReproductionRate, float newResistance);

    float getReproductionRate();
    float getResistance();

    Parasite* reproduce(float immunity);
    bool survive(float immunity);
};

// Animal Class


// Simulation Programm
int main(){
    // Create a parasite with 10% reporoduction and 20% resistance rate
    Parasite p{0.1, 0.2};
    // Create an animal with 30% immunity rate and 10 parasites
    Animal a{0.3, 10};

    cout << "This parasite has reporoduction rate: " << p.getReproductionRate()*100
         << "%, and resistance rate: " << p.getResistance()*100 << endl;

    cout << "This animal has immunity rate: " << a.getImmunity()*100
         << "%, and " << a.getParasiteNumber() << " parasites"<< endl;

    return 0;
}
