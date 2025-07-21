#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
//뒤에서부터 하나씩 보면서 나보다 큰 숫자들 중에 가까운거 찾기

vector<int> solution(vector<int> numbers) {
    vector<int> answer; //결과 저장
    stack<int> s; //나보다 뒤에 있는 숫자들을 담을 스택
    
    for(int i = numbers.size()-1 ; i >= 0 ; i--) {
        while(!s.empty() && s.top()<= numbers[i]) {
            s.pop();
        }
        if ( s.empty()) {
            answer.push_back(-1);
        } else {
            answer.push_back(s.top());
        }
        s.push(numbers[i]);
    }
    reverse(answer.begin(),answer.end());
    return answer;
}