#include "class.hpp"
int main() {
    Comp x (3.0, 4.0);
    Comp y (5.0, 6.0);
    cout << (x + y).mag_square();
    return 0;
}