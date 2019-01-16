#include <iostream>

int main(void){
    int i1 = 2;
    int i2, i3 = 5;
    float pi = 3.14159;
    double x = -1.5e6; // -1500000
    double y = -1.5e-6; // -0.0000015
    char c1 = 'a', c2 = 35;
    bool cmp = i1 < pi, // -> true
        happy = true;
    auto i4 = i3 + 7;

    std::cout << i1 << std::endl << i2 << std::endl << i3 << std::endl << pi << std::endl << x << std::endl
     << y << std::endl << c1 << std::endl << c2 << std::endl << cmp << std::endl << happy << std::endl
     << i4 << std::endl;

    return 0;
}