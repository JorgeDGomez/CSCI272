#include <iostream>
#include "mixed.h"
using namespace std;

int main(){
    Mixed m1(3, 4, 5);    // sets object to 3 4/5
    m1.Print(); // prints 3 4/5
    Mixed m2(-4, 1, 2);   // sets object to -4 1/2
    m2.Print(); // prints -4 1/2
    Mixed m3(0, -3, 5);   // sets object to -3/5 (integer part is 0).
    m3.Print(); // prints -3/5
    Mixed m4(-1, -2, 4);  // bad parameter combination.  Set object to 0.
    m4.Print(); // prints 0
    Mixed m4a(1, -2, -4); // bad parameter combination.  Set object to 0.
    m4a.Print(); // prints 0
    Mixed m5(4);
    m5.Print(); // prints: 4
    Mixed m6;
    m6.Print(); // prints 0
}
