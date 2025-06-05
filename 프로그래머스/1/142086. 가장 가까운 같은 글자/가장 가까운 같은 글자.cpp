#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int n = s.length();
    for(int i = 0 ; i < n ; i++) {
        int a = -1;
        for (int j = i-1 ;j>=0 ; j--) {
            if (s[j] == s[i]) {
                a = i-j;
                break;
            }
        }
        answer.push_back(a);
    }
    return answer;
}