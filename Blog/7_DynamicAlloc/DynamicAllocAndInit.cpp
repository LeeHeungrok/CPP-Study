#include <iostream>

#define SAFEDELETEARRAY(PTR) delete[](PTR); PTR = NULL
#define SAFEDELETE(PTR) delete(PTR); PTR = NULL

#pragma pack(push, 1)
typedef struct CUSTOMERINFO{
    char Name[10];
    int Age;
    int PhoneNum;
} CUSTOMERINFO, *PCUSTOMERINFO;
#pragma pack(pop)

int main(void){
    // 괄호를 사용하면 동적할당과 동시에 초기화 가능
    int *pNum = new(int)(100);
    int *rNum = pNum;
    printf("*pNum : %d | *rNum : %d\n", *pNum, *rNum);
    printf("------------------------------------------\n");
    delete pNum;

    PCUSTOMERINFO pCustomerList;
    pCustomerList = new CUSTOMERINFO{"이수민", 28, 999999};
    printf("이름 : %s | 나이 : %d | 핸드폰 번호 : %d\n", 
    pCustomerList->Name, pCustomerList->Age, pCustomerList->PhoneNum);
    printf("-------------------------------------------\n");
    SAFEDELETE(pCustomerList);
    return 0;
}