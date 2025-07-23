#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    unordered_map<int,int> left;
    unordered_map<int,int> right;
    
    int n = topping.size();
    
    for (int t : topping) {
        right[t]++;
    }
    for (int i = 0 ; i < n-1 ; i++ ) {
        int top = topping[i];
        
        left[top]++;
        right[top]--;
        
        if (right[top] == 0 ) {
            right.erase(top);
        }
        if (left.size() == right.size()) {
            answer++;
        }
    }
    
    return answer;
}