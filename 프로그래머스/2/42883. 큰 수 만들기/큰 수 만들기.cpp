#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(string number, int k) {
    //number에서 k개의 숫자 제거 -> 남은 숫자로 가장 큰 수 만들기
    
    stack<char> numstack;
    for (char n : number) {
        // 현재 숫자 n이 스택 top보다 크고 아직 제거 가능 개수 k가 >0이면
        // 스택에서 작은 숫자들을 제거해서 더 큰 숫자가 앞으로 오게함
        while (!numstack.empty() && k>0 && numstack.top() < n) {
            numstack.pop(); //작은거 제거
            k--; // 제거 횟수?
        }
        numstack.push(n);
    }
    while (k>0) {
        numstack.pop();
        k--;
    }
    string answer(numstack.size(), ' ');
    for (int i = numstack.size()-1 ; i>=0 ; --i) {
        answer[i] = numstack.top();
        numstack.pop();
    }
    return answer;
}