#include <iostream>

// C++에서 구조체가 함수를 갖을 수 있다.
// C에서는 구조체가 변수만 갖을 수 있다.
struct PRODUCTINFO{
    char Name[10];
    int Price;
    void PrintInfo(void){
        printf("이름 : %12s\n", this->Name);
        printf("가격 : %11d원\n", this->Price);
    }
};
typedef PRODUCTINFO *PPRODUCTINFO;



int main(void){
    PRODUCTINFO Lego = {"Test", 800000};
    Lego.PrintInfo();
    
    return 0;
}