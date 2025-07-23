#include <string>
#include <vector>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    int a[10001] = {0}; //원소 집어넣을 배열
    int b[10001] = {0}; 
    
    int leftCount = 0; //갯수 알려줄 배열
    int rightCount = 0;
    
    for (int i = 0 ; i < topping.size() ; ++i) {
        if( b[topping[i]] == 0 ){
            rightCount++;
        } b[topping[i]]++;  
    }
    for (int i = 0 ; i< topping.size()-1; ++i) {
        int top = topping[i];
        if (a[top]==0) {
            leftCount++;
        } a[top]++;
        b[top]--;
        if(b[top]==0) {
            rightCount--;
        }
        if (leftCount == rightCount) {
            answer++;
        }
    }
    return answer;
}