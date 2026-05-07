#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    set<int> s;
    s.insert({a,b,c});
    if (s.size() == 1) {
        answer += (a+b+c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);
    } else if (s.size() == 2) {
        answer += (a+b+c) * (a*a + b*b + c*c);
    } else {
        answer += (a+b+c);
    }
    return answer;
}