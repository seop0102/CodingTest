#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    int k = n - m;
    if ( k == 0) {
        if ( eq == "=") answer = 1;
        else answer = 0;
    } else if ( k < 0 ) {
        if (ineq == "<") answer = 1;
        else answer = 0;
    } else {
        if (ineq == ">") answer = 1;
        else answer = 0;
    }
    return answer;
}