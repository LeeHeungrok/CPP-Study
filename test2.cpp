#include <string>
#include <vector>

using namespace std;

int solution(vector<int> buildingSize, vector<vector<int>> land) {
    int answer = 0;
    int check = 0;

    // 가로 세로 같을 시
    if(buildingSize[0] == buildingSize[1]){
        for(vector<int>::size_type i = 0; i < land.size() - buildingSize[0] + 1; i ++){
            for(vector<int>::size_type j = 0; j < land[i].size() - buildingSize[0] + 1; j ++){
                for(int k = j; k <= j + buildingSize[1] - 1; k ++){
                    for(int p = i; p <= i + buildingSize[0] - 1; p ++){
                        check += land[p][k];
                    }
                }
                printf("test1: %d\n", check);
                if(check == 0){
                    answer ++;
                }
                check = 0;
            }
        }
    }
    // 가로 세로 다를 시
    else {
        for(vector<int>::size_type i = 0; i < land.size(); i ++){
            for(vector<int>::size_type j = 0; j < land[i].size(); j ++){
                // 가로 확인
                if(j < land.size() - buildingSize[1] + 1){
                    for(int k = j; k <= j + buildingSize[1] - 1; k ++){
                        for(int p = i; p <= i + buildingSize[0] - 1; p ++){
                            check += land[p][k];
                        }
                    }
                    printf("test1: %d\n", check);
                    if(check == 0){
                        answer ++;
                    }
                    check = 0;
                }
                
                // 세로 확인
                if(i < land.size() - buildingSize[0] + 1){
                    for(int k = j; k <= j + buildingSize[0] - 1; k ++){
                        for(int p = i; p <= i + buildingSize[1] - 1; p ++){
                            check += land[p][k];
                        }
                    }
                    printf("test1: %d\n", check);
                    if(check == 0){
                        answer ++;
                    }
                    check = 0;
                }
            }
        }
    }

    printf("test: %d", answer);
    return answer;
}