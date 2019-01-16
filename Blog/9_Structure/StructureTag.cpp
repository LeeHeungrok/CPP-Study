#include <iostream>

// C의 identifier
// typedef struct DATA{
//     char Name[10];
//     int Money;
// }DATA;

// C++의 identifier (tag가 identifier처럼 작동)
struct DATA{
    char Name[10];
    int Money;
};

int main(void){
    struct DATA data1;  // tag 사용
    DATA Data2;         // C는 identifier 사용 / C++은 tag 사용
    return 0;
}