#include <iostream>

typedef struct DATA{
    double dNum;
} DATA;

DATA &LocationReference(void){
    DATA TempData = {50.26};
    return TempData;
}

int main(void){
    DATA *pData = &LocationReference();
    printf("pData->dNum : %.2f\n", pData->dNum);
    printf("pData->dNum : %.2f\n", pData->dNum); // eax에서 반환값이 사라지기 때문에 0이 됨.
    return 0;
}