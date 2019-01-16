#include <iostream>

struct PRODUCTINFO{
    char Name[10];
    int Price;
    void PrintInfo(void);
};
typedef PRODUCTINFO *PPRODUCTINFO;

void PRODUCTINFO::PrintInfo(void){
    printf("이름 : %12s\n", this->Name);
    printf("가격 : %11d원\n", this->Price);
}

int main(void){
    PRODUCTINFO Lego = {"Test2", 800000};
    Lego.PrintInfo();
    
    return 0;
}