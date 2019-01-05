#include <iostream>

using namespace std;

#define Pause() system("pause")
#define Clear() system("cls")

void NowLocation(const char* loaction = "집");

int main(void){
    char Location[100];

    while(1){
        cout<< "현재 위치를 입력하세요(기본값은 집입니다) : ";
        gets(Location);

        if(strcmp(Location, "") == 0){
            NowLocation();
        }
        else {
            NowLocation(Location);
        }
        Pause();
        Clear();
    }

    return 0;
}

void NowLocation(const char* loaction){
    cout << "현재 위치는 " << loaction << "입니다." << endl;
}