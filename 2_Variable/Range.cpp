#include <iostream>

const double pi = 3.14159265358979323846264338327950288419716939; // 전역 변수

int main(void){
    {
        const double pi2 = 3.14159265358979323846264338327950288419716939; // 지역 변수
    }
    std::cout << "pi is " << pi2 << std::endl;  // 오류: pi2는 범위 밖에 있음
    return 0;
}