#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void alphabet(string now, int t, vector<string>& dictionary) {
    if (t > 5 ) {
        return;
    }
    if (!now.empty()) {
        dictionary.push_back(now);
    }
    for (char ch : {'A', 'E', 'I','O','U'}) {
        alphabet(now+ch, t+1, dictionary);
    }
}
int solution(string word) {
    int answer = 0;
    vector<string> dictionary;
    
    alphabet("",0,dictionary);
    sort(dictionary.begin(), dictionary.end());
    for(int i = 0 ; i < dictionary.size(); ++i) {
        if(dictionary[i] == word) {
            answer = i+1;
        }
    }
    return answer;
}