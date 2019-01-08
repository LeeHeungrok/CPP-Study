#include <iostream>

int main(void){

    // nullptr은 0이 아니라 새로운 자료형으로 취급 (실수 방지하기 위한 컴파일러 오류, 초기화할 때만 사용)
    printf("std::nullptr_t의 크기 : %d바이트\n", sizeof(std::nullptr_t));
    printf("__nullptr의 크기 : %d바이트\n", sizeof(__nullptr));
    printf("nullptr의 크기 : %d바이트\n", sizeof(nullptr));
    
    return 0;
}