#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> s) {
    vector<string> answer;
    
    for (const string& x : s) {
        string str;
        int count = 0;
        for (char c : x) {
            str.push_back(c);
            int n = str.size();
            if ( n >= 3 && 
                str[n-3]=='1'&& 
                str[n-2]=='1'&&
                str[n-1]=='0') 
            {
                str.resize(n-3); // 문자열 길이 n-3으로 줄임 (뒤쪽 문자 잘려나감)
                ++count;
            }
        }
        string str110;
        for (int i = 0 ; i < count; ++i) {
            str110 += "110";
        }
        size_t pos = str.find_last_of('0');
        if ( pos == string::npos) { // 1밖에 없으면
            answer.push_back(str110 + str);
        } else { // 0이 있으면
            answer.push_back(str.substr(0, pos+1) + str110 + str.substr(pos+1)); // 마지막 0 전까지 + 110 * count + 마지막 0 이후 나머지
        }
    }
    return answer;
}