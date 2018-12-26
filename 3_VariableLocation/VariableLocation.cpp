#include <iostream>

#define Pause() system("pause")
#define Clear() system("cls")

int main(){
    int iStart, iEnd, iSum = 0;

    while(1){
        std::cout << "숫자의 시작 범위와 끝 범위를 입력하세요 : ";
        std::cin >> iStart >> iEnd;

        for(int i = iStart; i <= iEnd; ++ i){
            iSum += i;
        }
        std::cout << iStart << "부터 " << iEnd << "까지의 합은 " << iSum << "입니다." << std::endl;
        Pause();
        Clear();
    }

    return 0;
}