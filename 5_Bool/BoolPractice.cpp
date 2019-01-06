#include <iostream>

using namespace std;

int main(void){
    bool bPlayerLineInCheck = false;
    int iPlayerLocation;

    while(true){
        cout << "현재 플레이어는 -100 ~ 100으로만 이동이 가능합니다." << endl;
        cout << "플레이어의 현재 위치를 입력하세요 : ";
        cin >> iPlayerLocation;
        
        if(iPlayerLocation >= -100 &&
        iPlayerLocation <= 100){
            bPlayerLineInCheck = true;
        }
        else {
            bPlayerLineInCheck = false;
        }

        if(bPlayerLineInCheck == true){
            cout << "플레이어가 선 안에 있습니다." << endl;
        }
        else if(bPlayerLineInCheck == false){
            cout << "플레이어가 선 밖에 있습니다." << endl;
        }
    }
    return 0;
}