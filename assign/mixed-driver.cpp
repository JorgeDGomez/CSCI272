#include <iostream>
//#include "mixed.h"
using namespace std;

class Mixed {
    int integer;
    int numerator;
    int denominator;
public:
    explicit Mixed(int i = 0, int n = 0, int d = 0);
    void Print();
};

Mixed::Mixed(int i, int n, int d){
    if (    ((i == 0) && (d == 0)) ||
            (i < 0 && (n < 0 || d < 0)) ||
            (n < 0 && d < 0)
        )
    {
        integer = 0;
        numerator = 0;
        denominator = 0;
    } else {
        integer = i;
        numerator = n;
        denominator = d;
    }
}

void Mixed::Print()
{
    if (integer != 0)
        cout << integer << " ";
    if (numerator == 0 && denominator == 0)
        if (integer == 0)
            cout << "0" << endl;
        else
            cout << endl;
    else
        cout << numerator << "/" << denominator << endl;
}


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
