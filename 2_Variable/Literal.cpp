#include <iostream>
#include <complex>
#include <string>

/**
 * 리터럴은 강제 변환을 안해도 묵시적으로 변환해준다.
*/
int main (void){
    std::complex<float> z(1.3, 2.4), z2;    // z는 int나 double과 곱할 수 없고 float만 곱할 수 있다.
    z2 = 2 * z;     // 오류: int * complex<float>
    z2 = 2.0 * z;   // 오류: double * complex<float>
    z2 = 2.0f * z;  // 정상: float * complex<float>
    long double third1 = 0.3333333333333333;    // 자릿수 몇개가 날라갈 수 있다.
    long double third2 = 0.3333333333333333l;   // 정확히 저장됨.
    // 0으로 시작하면 8진수로 해석
    int o1 = 042;   // int o1 = 34;
    int o2 = 089;   // 오류: 8진수에는 8이나 9가 없다.
    // 0x, 0X로 시작하면 16진수로 해석
    int h1 = 0x42;  // int h1 = 66;
    int h2 = 0Xfa;  // int h2 = 250;
    // [C++14] 0b, 0B로 시작하면 2진수로 해석
    int b1 = 0b11111010;    // int b1 = 250;
    // [C++14] 아포스트로피(')로 숫자를 분리하여 긴 리터럴의 가독성을 향상
    long d = 6'546'687'616'861'129l;
    unsigned long ulx = 0x139'ae3b'2ab0'94f3;
    int b = 0b101'1001'0011'1010'1101'1010'0001;
    const long double pi= 3.141'592'653'589'793'238'462l;
    // 문자열에는 아포스트로피(')를 쓰지 않고도 분할할 수 있다.
    char s1[] = "0ld C Style";  // char 배열은 더 좋지 않다.
    std::string s2 = "In C++ better like this"; // 기본형 string
    std::string s3 = "This is a very long and clumsy text"
                    "that is too long for one line.";   // 긴 string을 이렇게 하면 자동으로 분리되어 가독성을 향상

    return 0;
}