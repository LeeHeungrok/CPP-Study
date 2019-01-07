#include <iostream>

// 재할당이 필요할 때에는 밑과 같이 new와 delete를 반복하면 재할당처럼 되긴 하지만, 재할당이 필요한 경우
// 그냥 malloc(), realloc(), free()를 쓰는게 좋음.
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

    pCustomerList = new CUSTOMERINFO;
    printf("할당된 크기 : %d바이트\n", sizeof(pCustomerList));
    SAFEDELETEARRAY(pCustomerList);
}