#include <iostream>

int main(void){
    const int ci1 = 2;
    const int ci3; // 오류: 값을 할당하지 않음.
    const float pi = 3.14159;
    const char cc = 'a';
    const bool cmp = ci1 < pi;

    std::cout << ci1 << std::endl << ci3 << std::endl << pi << std::endl << cc << std::endl << cmp << std::endl;

}