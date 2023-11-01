#include "fractie.h"
#include <iostream>

using namespace std;

fractie::fractie(int, int) {
    this->a = 0;
    this->b = 0;
}

fractie::fractie(const fractie &c) {
    this->a = c.a;
    this->b = c.b;
}

fractie &fractie::operator=(const fractie &c) {
    a = c.a;
    b = c.b;
    return *this;
}

double fractie::getValoare() {
    return a / b;
}

fractie fractie::getInv() {
    return b / a;
}

float fractie::getA() {
    return a;
}

float fractie::getB() {
    return b;
}

void fractie::afisare() const {
    cout << "A=" << a << "\n";
    cout << "B=" << b << "\n";
    cout << "A/B=" << a / b << "\n";
    cout << "B/A=" << b / a << "\n";
}

const fractie operator+(const fractie &c, const fractie &d ) {
    return fractie(c+d);
}

const fractie operator-(const fractie& c, const fractie& d){
    return fractie(c-d);
}

const fractie operator-(const fractie &c){
    int num=-c.a;
    int den=c.b;
    return fractie(c.a,c.b);
}

const fractie operator*(const fractie &c, const fractie &d){
    int num = c.a*d.a;
    int den=c.b*d.b;
    return fractie(num,den);
}

const fractie operator/(const fractie &c, const fractie &d){
    int num=c.a/d.a;
    int den=c.b/d.b;
    return fractie(num, den);
}