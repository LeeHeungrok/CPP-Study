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
    long l = 123456789012;
    long l2 = l + 1.0f - 1.0;   // 부정확 => 1234567954431
    long l3 = l + (1.0f - 1.0); // 정확  => 1234567890123
    bool in_bound = min <= x <= y <= max; // 오류
    bool in_bound1 = min <= x && x <= y && y <= max;

    return 0;
}