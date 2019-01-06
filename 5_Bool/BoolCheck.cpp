#include <iostream>
using namespace std;

int main(void){
    bool    bData   = 0.0;
    int     iNum    = 26;
    double  dNum    = 626.52;

    cout << "bData : " << bData << endl;

    // 정수 할당
    bData = iNum;  
    cout << "bData : " << bData << endl;

    // 상수 할당
    bData = dNum;
    cout << "bData : " << bData << endl;

    return 0;
}