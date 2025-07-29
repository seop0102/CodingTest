#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compareNum(int a, int b) {
    string x = to_string(a) + to_string(b);
    string y = to_string(b) + to_string(a);
    return x>y;
}

string solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end(), compareNum);
    
    string answer = "";
    for (int num : numbers) {
        answer += to_string(num);
    }
    if (numbers[0] == 0 ) return "0";
    return answer;
}