#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
 int len = strings.size();
    for (int i = 0; i < len - 1; ++i) {
        for (int j = i + 1; j < len; ++j) {
            // n번째 글자가 더 크면 바꾸기
            if (strings[i][n] > strings[j][n]) {
                swap(strings[i], strings[j]);
            }
            // n번째 글자가 같으면 사전순 비교
            else if (strings[i][n] == strings[j][n] && strings[i] > strings[j]) {
                swap(strings[i], strings[j]);
            }
        }
    }

    return strings;  // 정렬된 strings 바로 반환
}