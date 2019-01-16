#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> nums, int target) {
    vector<int> answer;
    
    for(vector<int>::size_type i = 0; i < nums.size(); i ++){
        for(int j = i + 1; j < nums.size(); j ++){
            if(nums[i] + nums[j] == target){
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
        }
    }
    return answer;
}