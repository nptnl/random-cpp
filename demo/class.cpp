#include <iostream>
using namespace std;

class Comp {
    public:
    double r;
    double i;

    Comp(double re, double im) { r = re; i = im; }
    double mag_square() { return r*r + i*i; }
};

int main() {
    Comp x (3.0, 4.0);
    cout << x.mag_square();
    return 0;
}