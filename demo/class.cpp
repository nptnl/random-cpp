#include <iostream>
using namespace std;

class Comp {
    public:
    double r;
    double i;

    Comp() { r = 0.; i = 0.; }
    Comp(double re, double im) { r = re; i = im; }
    double mag_square() { return r*r + i*i; }

    Comp operator+ (const Comp&);
};
Comp Comp::operator+ (const Comp& other) {
    Comp ret;
    ret.r = r + other.r;
    ret.i = i + other.i;
    return ret;
}

int main() {
    Comp x (3.0, 4.0);
    Comp y (5.0, 6.0);
    cout << (x + y).mag_square();
    return 0;
}