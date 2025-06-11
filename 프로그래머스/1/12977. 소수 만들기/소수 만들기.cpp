#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int size = nums.size();
    for (int i = 0 ; i < size-2 ; i++) {
        for (int j = i+1 ; j < size-1 ; j++) {
            for (int k = j+1 ; k < size ; k++) {
                int sum = nums[i] + nums [j] + nums[k];
                bool sosu = true;
                for (int a = 2; a<sum ; a++) {
                    if (sum % a == 0) {
                        sosu = false;
                        break;     
                    }
                }
                if (sosu == true) answer++;
                }
            }
        }
    return answer;
}