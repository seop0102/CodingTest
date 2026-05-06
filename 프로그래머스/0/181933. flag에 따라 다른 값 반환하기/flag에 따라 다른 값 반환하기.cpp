#include <string>
using namespace std;
int solution(int a, int b, bool flag) {
    int answer;
    if (flag == true) answer = a+b;
    else answer = a-b;
    return answer;
}