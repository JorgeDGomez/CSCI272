#include <iostream>
#include <algorithm> 
#include "mixed.h"
using namespace std;

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

double Mixed::Evaluate() const
{
    return integer + static_cast<double>(numerator)/denominator;
}

void Mixed::ToFraction()
{
    if (denominator == 0) {
        // only integer part preset, so make denominator 1
        numerator = integer;
        denominator = 1;
    } else {
        numerator += integer*denominator;
    }
    integer = 0;
}

void Mixed::Simplify()
{
    int tmp = numerator/denominator;
    integer += tmp;
    if (numerator == denominator) {
        // zero rational part of mixed
        numerator = 0;
        denominator = 0;
    } else {
        numerator %= denominator;
        // get rid of rational part
        if (numerator == 0)
            denominator = 0;
    }

}

bool Mixed::operator<(const Mixed& m) const
{
    return (Evaluate() < m.Evaluate());
}

bool Mixed::operator>(const Mixed& m) const
{
    return !(*this < m);
}

bool Mixed::operator<=(const Mixed& m) const
{
    return (*this < m) || (*this == m);
}

bool Mixed::operator>=(const Mixed& m) const
{
    return (*this > m) || (*this == m);
}

bool Mixed::operator==(const Mixed& m) const
{
    return (integer == m.integer) &&
           (numerator == m.numerator) &&
           (denominator == m.denominator);
}

bool Mixed::operator!=(const Mixed& m) const
{
    return !(*this == m);
}

Mixed Mixed::operator+(const Mixed& m) const
{
    Mixed a(integer, numerator, denominator);
    Mixed b(m.integer, m.numerator, m.denominator);
    // convert mixed to fractional representation
    a.ToFraction();
    b.ToFraction();
    cout << a << " | " << b << endl;
    // perform addition of frctions
    a.numerator = a.numerator*b.denominator + b.numerator*a.denominator;
    a.denominator *= b.denominator;    
    int gcd = __gcd(a.numerator, a.denominator); // find gcd for simplification
    cout << a << ", gcd: " << gcd  << endl;
    a.numerator /= gcd;
    a.denominator /= gcd;    
    // convert to mixed representation
    a.Simplify();
    return a;
}

Mixed Mixed::operator-(const Mixed& m) const
{
    Mixed a(m.integer, m.numerator, m.denominator);
    // convert mixed to fractional representation
    a.ToFraction();
    // use additive inverse rule
    return (*this) + Mixed(0, -a.numerator, a.denominator);
}

Mixed Mixed::operator*(const Mixed& m) const
{
    Mixed a(integer, numerator, denominator);
    Mixed b(m.integer, m.numerator, m.denominator);
    // convert mixed to fractional representation
    a.ToFraction();
    b.ToFraction();
    //cout << a << " | " << b << endl;
    // perform addition of farctions
    a.numerator = a.numerator*b.numerator;
    a.denominator *= b.denominator;    
    int gcd = __gcd(a.numerator, a.denominator); // find gcd for simplification
    //cout << a << ", gcd: " << gcd  << endl;
    a.numerator /= gcd;
    a.denominator /= gcd;    
    // convert to mixed representation
    a.Simplify();
    return a;

}

Mixed Mixed::operator/(const Mixed& m) const
{    
    Mixed a(m.integer, m.numerator, m.denominator);
    // convert mixed to fractional representation
    a.ToFraction();
    // use multiplicative inverse rule
    return (*this) * Mixed(0, a.denominator, a.numerator);
}

Mixed& Mixed::operator++()
{
    this->integer++;
    return *this;
}

Mixed& Mixed::operator++(int)
{
    Mixed* tmp = new Mixed(this->integer, this->numerator, this->denominator);
    this->integer++;
    return *tmp;
}

Mixed& Mixed::operator--()
{
    this->integer--;
    return *this;
}

Mixed& Mixed::operator--(int n)
{
    Mixed* tmp = new Mixed(this->integer, this->numerator, this->denominator);
    this->integer--;
    return *tmp;
}

ostream& operator<<(ostream& o, const Mixed& m)
{
    if (m.integer != 0)
        o << m.integer << " ";
    if (m.numerator == 0 && m.denominator == 0) {
        if (m.integer == 0)
            o << "0";
    }
    else
        o << m.numerator << "/" << m.denominator;
    return o;
}

istream& operator>>(istream& o, Mixed& m)
{
    int a, b, c;
    o >> a;
    o >> b;
    o.get();
    o >> c;
    m = Mixed(a,b,c);
    return o;
}
