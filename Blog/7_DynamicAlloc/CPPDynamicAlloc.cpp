#include <iostream>

// new 할당할 때, 배열로 할당하면 delete도 배열로 제거해야 된다. ex) new CUSTOMERINFO[index] = delete[](PTR)
// new 단일로 할당하면 delete도 단일로. ex) new CUSTOMERINFO = delete(PTR)
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
    PCUSTOMERINFO pCustomerList;

    pCustomerList = new CUSTOMERINFO[5];
    printf("할당된 크기 : %d바이트\n", sizeof(pCustomerList));

    SAFEDELETEARRAY(pCustomerList);
    return 0;
}