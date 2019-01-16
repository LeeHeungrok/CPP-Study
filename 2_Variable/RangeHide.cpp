#include <iostream>

int main(void){
    int a = 5; // a#1
    {
        a = 3; // a#1에 할당
        int a; // a#2
        a = 8; // a#2에 할당, a#1은 숨겨짐
        {
            a = 7; // a#2에 할당
        }
    } // a#2 범위 끝
    a = 11; // a#1에 할당

    return 0;
}