#include <iostream>

using namespace std;

int main(void){
    double  dNum    = 10.26;
    double  &rNum   = dNum;

    cout << "dNum       : " << dNum << "    | rNum      : " << rNum << endl;
    cout << "dNum의 크기   : " << sizeof(dNum) << "바이트 | rNum의 크기  : " << sizeof(rNum) << "바이트" << endl;
    cout << "dNum의 주소    : " << &dNum << "   | rNum의 주소 :" <<  &rNum << endl << endl;

    dNum ++;
    cout << "dNum에 1을 더한 결과" << endl;
    cout << "dNum       : " << dNum << "    | rNum : " << rNum << endl << endl;

    rNum --;
    cout << "rNum에 1을 뺀 결과" << endl;
    cout << "dNum       : " << dNum << "    | rNum : " << rNum << endl;
    return 0;
}