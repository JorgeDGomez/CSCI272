#include <iostream>
using namespace std;

class Real {
    friend ostream& operator<<(ostream&, const Real&);
protected:
    // data memeber
    double a;
public:
    // constructor
    Real(double x): a{x} {}
    // overloaded operation
    Real operator*(Real& x) const {
        double r = a * x.a;
        return Real(r);
    }
    Real operator/(Real& x) const {
        double r = a / x.a;
        return Real(r);
    }
    Real operator^(int x) const {
        double r = pow(a,x);
        return Real(r);
    }
    Real operator++(int){
        // make a copy
        Real tmp{a};
        // increment current object
        a += 1;
        // return copy to create an lvalue
        return tmp;
    }
    Real& operator++(){
        // increment object
        a += 1;
        // reference return to create an lvalue
        return *this;
    }
};

ostream& operator<<(ostream& output, const Real& obj) {
    output << obj.a;
    return output;
}

int main()
{
    Real a{20.0}, b{2.5};
    int c = 3;
    // next line shows: 20 * 2.5 = 50
    cout << a << " * " << b << " = " << (a*b) << endl;
    // next line shows: 20 / 2.5 = 8.0
    cout << a << " / " << b << " = " << (a/b) << endl;
    // next line shows: 20^3 = 8000
    cout << a << "^" << c << " = " << (a^c) << endl;
    // next line shows: 20 -> 21
    cout << a++ << " -> " << a << endl;
    // next line shows: 22 -> 22
    cout << ++a << " -> " << a << endl;
    return 0;
}