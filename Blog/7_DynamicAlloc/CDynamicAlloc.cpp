#include <iostream>

#define SAFEDELETE(PTR) free(PTR); PTR = NULL

#pragma pack(push, 1)
typedef struct CUSTOMERINFO{
    char Name[10];
    int Age;
    int PhoneNum;
} CUSTOMERINFO, *PCUSTOMERINFO;
#pragma pack(pop)

int main(void){
    PCUSTOMERINFO pCustomerList;

    pCustomerList = (PCUSTOMERINFO)malloc(sizeof(CUSTOMERINFO) * 5);
    printf("할당된 크기 : %d바이트\n", sizeof(pCustomerList));

    SAFEDELETE(pCustomerList);
    return 0;
}