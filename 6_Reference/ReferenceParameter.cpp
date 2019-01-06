#include <iostream>

using namespace std;

typedef struct DATA{
    double dNum;
    int NumList[20];
} DATA;

// 포인터 사용
// void CallByReference(DATA *pData){
//     cout << "pData의 크기 : " << sizeof(pData) << "바이트" << endl;
//     cout << "Data의 크기 : " << sizeof(*pData) << "바이트" << endl;
//     pData->dNum = 20.36;
// }

// 참조자 사용
void CallByReference(DATA &rData){
    cout << "Data의 크기 : " << sizeof(rData) << "바이트" << endl;
    rData.dNum = 20.36;
}

int main(void){
    DATA Data;
    // CallByReference(&Data); // 포인터 사용
    CallByReference(Data);  // 참조자 사용
    cout << "Data.dNum      : " << Data.dNum << endl;
    return 0;
}