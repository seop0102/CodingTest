#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer;
    string x, y;
    x = to_string(a) + to_string(b);
    y = to_string(b) + to_string(a);
    if (x > y) {
        answer = stoi(x);
    } else {
        answer = stoi(y);
    }
    return answer;
}