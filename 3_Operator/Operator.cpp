#include <iostream>

int main(void){
    int i = 3;
    i ++;
    const int j = 5;
    j ++;       // 오류: j는 상수
    (3 + 5) ++; // 오류: 일시적인 값
    int i = 3, j = 3;
    int k = ++i + 4;
    int l = j++ + 4;
    int i = 3;
    int j = -i; // j는 -3

    return 0;
}