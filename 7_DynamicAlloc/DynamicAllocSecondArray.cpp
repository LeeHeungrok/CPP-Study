#include <iostream>

#define SAFEDELETEARRAY(PTR) delete[](PTR); PTR = NULL
#define SAFEDELETE(PTR) delete(PTR); PTR = NULL

#pragma pack(push, 1)
typedef struct CUSTOMERINFO{
    char Name[10];
    int Age;
    int PhoneNum;
} CUSTOMERINFO, *PCUSTOMERINFO, **PPCUSTOMERINFO;
#pragma pack(pop)

int main(void){
    // 5행
    PPCUSTOMERINFO ppCustomerList = new PCUSTOMERINFO[5];

    // 8열
    for(int i = 0; i < 5; ++ i){
        ppCustomerList[i] = new CUSTOMERINFO[8];
    }

    printf("할당된 크기 : %d바이트\n", sizeof(ppCustomerList[0]) * 5);
    ppCustomerList[4][7].Age = 30;
    printf("ppCustomerList[4][7].Age : %d\n", ppCustomerList[4][7].Age);

    for(int i = 0; i < 5; ++ i){
        SAFEDELETEARRAY(ppCustomerList[i]);
    }
    SAFEDELETEARRAY(ppCustomerList);
    return 0;
}