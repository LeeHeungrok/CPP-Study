#include <iostream>

using namespace std;

enum DYNAMIC_ALLOCATION {DA_NONE, DA_ACTIVATE};

void *SwitchDynamicAllocation(enum DYNAMIC_ALLOCATION eSelect = DA_NONE, int iDataSize = 0);

int main(void){
    char Location[100];
    void *pResult;

    pResult = SwitchDynamicAllocation();

    pResult = SwitchDynamicAllocation(DA_ACTIVATE, 4);

    if(pResult != NULL){
        free(pResult);
    }

    return 0;
}

void *SwitchDynamicAllocation(enum DYNAMIC_ALLOCATION eSelect, int iDataSize){
    int iCount;

    if(eSelect == DA_NONE){
        cout << "동적 할당을 선택하지 않았습니다." << endl;
        cout << "-------------------------------------------" << endl;
        return NULL;
    }

    cout << "할당할 개수를 입력하세요(현재 할당 크기 단위 : " << iDataSize << ") : ";
    cin >> iCount;

    void *pResult = malloc(iDataSize * iCount);
    cout << iCount << "개를 할당했습니다. 할당된 크기 " << pResult << "바이트" << endl;
    cout << "------------------------------------------" << endl;
    return pResult;
}