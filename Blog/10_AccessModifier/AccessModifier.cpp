#include <iostream>

#define SAFEDELETE(PTR) delete PTR; PTR = nullptr

struct PRODUCTINFO{
private:
    char Name[10];
    int Price;
protected:
    char Company[20];
public:
    void PrintInfo(void){
        printf("회사 : %12s\n", this->Company);
        printf("이름 : %12s\n", this->Name);
        printf("가격 : %11d원\n", this->Price);
    }
};
typedef PRODUCTINFO *PPRODUCTINFO;

int main(void){
    PPRODUCTINFO Gunpra = new PRODUCTINFO;
    Gunpra->PrintInfo();
    SAFEDELETE(Gunpra);
    return 0;
}