#include <iostream>

using namespace std;

typedef struct DATA{
    double dNum;
} DATA;

DATA g_Data[5] = {2.52, 63.34, 75.93, 21.72, 94.38};
DATA (&g_rData)[5] = g_Data;

DATA &GetDataReference(int iIdx){
    return g_rData[iIdx];
}

DATA GetDataOriginal(int iIdx){
    return g_rData[iIdx];
}

int main(void){
    // 값 자체를 반환하므로 에러가 남
    // GetDataOriginal(1).dNum = 6.6;
    // cout << "g_Data[1].dNum : " << g_Data[1].dNum << endl;

    GetDataReference(1).dNum = 88.23;
    cout << "g_Data[1].dNum : " << g_Data[1].dNum << endl;
    return 0;
}