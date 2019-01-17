#include <iostream>

int main(void){
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19};

    // [C++11] 범위 기반 for 문
    for(int i : primes){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}