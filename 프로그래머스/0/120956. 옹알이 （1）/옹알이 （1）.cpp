#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> words = {"aya", "ye", "woo", "ma"};

    for (int i = 0; i < babbling.size(); i++) {
        bool bIsSpeak = true;

        while (bIsSpeak) {
            bIsSpeak = false;

            for (int j = 0; j < words.size(); j++) {
                size_t index = babbling[i].find(words[j]);

                if (index == 0) {
                    babbling[i].erase(0, words[j].size());
                    bIsSpeak = true;
                    break;
                }
            }
        }

        if (babbling[i].empty())
            answer++;
    }

    return answer;
}