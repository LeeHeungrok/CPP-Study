#include <iostream>

using namespace std;

// 값에 의한 호출(Call-by-Value), 값에 의한 전달(Pass-by-Value)
void increment(int x){
    x++;
}

// 레퍼런스에 의한 호출, 인수를 레퍼런스로 전달(Pass-by-Reference)
void rIncrement(int& x){
    x++;
}

int main(void){
    int i = 4;
    increment(i);   // i가 증가되지 않음
    cout << "i is " << i << endl;
    rIncrement(i);   // i가 증가됨
    cout << "i is " << i << endl;
}