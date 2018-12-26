#include <ctime>
#include <iostream>

int main(){
    time_t nowTime = time(NULL);

    std::cout << "현재 시간: " << ctime(&nowTime) << std::endl;
    return 0;
}