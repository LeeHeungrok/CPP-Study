#include <iostream>

#define SAFEDELETE(PTR) delete PTR; PTR = nullptr

struct PRODUCTINFO{
private:
    char Name[10];
    int Price;
protected:
    char Company[20];
public:
    void InitializeInfo(const char *szName, int iPrice, const char *szCompany){
        strcpy(this->Name, szName);
        this->Price = iPrice;
        strcpy(this->Company, szCompany);
    }

    void PrintInfo(void){
        printf("회사 : %16s\n", this->Company);
        printf("이름 : %16s\n", this->Name);
        printf("가격 : %14d원\n", this->Price);
    }
};
typedef PRODUCTINFO *PPRODUCTINFO;

int main(void){
    PPRODUCTINFO Gunpra = new PRODUCTINFO;
    Gunpra->InitializeInfo("Gundam", 42000, "Bandai");
    Gunpra->PrintInfo();
    SAFEDELETE(Gunpra);

    return 0;
}