#include <iostream>

typedef struct DATA{
    double dNum;
    int NumList[20];
} DATA;

typedef void(&rFunc)(DATA &);
typedef void(*pFunc)(DATA &);

void CallByReference1(DATA &rData){
    rData.dNum = 20.36;
}

void CallByReference2(DATA &rData){
    rData.dNum = 40.36;
}

int main(void){
    DATA Data;
    rFunc rSelect = CallByReference1;
    pFunc pSelect = CallByReference1;
    rSelect(Data);
    pSelect(Data);
    // rSelect = CallByReference2;  // 함수 참조자는 변경 불가능
    printf("Data.dNum : %.2f\n", Data.dNum);
    pSelect = CallByReference2; // 함수 포인터는 변경 가능
    pSelect(Data);
    printf("Data.dNum : %.2f\n", Data.dNum);
    return 0;
}