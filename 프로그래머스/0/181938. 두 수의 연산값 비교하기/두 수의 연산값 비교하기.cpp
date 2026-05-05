#include <string>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string x;
    x = to_string(a) + to_string(b);
    if ( stoi(x) >= 2*a*b) {
        answer = stoi(x);
    } else {
        answer = 2*a*b;
    }
    return answer;
}