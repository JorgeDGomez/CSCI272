#pragma once
#include <iostream>

class Mixed {
    int integer;
    int numerator;
    int denominator;
public:
    explicit Mixed(int i = 0, int n = 0, int d = 0);

    // methods
    void Print();
    double Evaluate() const;
    void ToFraction();
    void Simplify();

    // operators
    bool operator<(const Mixed&) const;
    bool operator>(const Mixed&) const;
    bool operator<=(const Mixed&) const;
    bool operator>=(const Mixed&) const;
    bool operator==(const Mixed&) const;
    bool operator!=(const Mixed&) const;
    Mixed operator+(const Mixed&) const;
    Mixed operator-(const Mixed&) const;
    Mixed operator*(const Mixed&) const;
    Mixed operator/(const Mixed&) const;
    Mixed& operator++();
    Mixed& operator--();
    Mixed& operator++(int);
    Mixed& operator--(int);

    friend std::ostream& operator<<(std::ostream&, const Mixed&);
    friend std::istream& operator>>(std::istream&, Mixed&);
};

