#include <iostream>

using namespace std;

// 값에 의한 호출(Call-by-Value), 값에 의한 전달(Pass-by-Value)
void increment(int x){
    x++;
}

int main(void){
    int i = 4;
    increment(i);   // i가 증가되지 않음
    cout << "i is " << i << endl;
}