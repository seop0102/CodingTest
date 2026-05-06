#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    int k = n - m;
    if ( k == 0) {
        answer = (eq == "=");
    } else if ( k < 0 ) {
        answer = (ineq == "<");
    } else {
        answer = (ineq == ">");
    }
    return answer;
}