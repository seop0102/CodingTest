#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    int alphabet[26] = {0};
    for (int i = 0 ; i<keymap.size() ; i++) {
        for (int j = 0 ; j < keymap[i].size() ; j++) { 
            char c = keymap[i][j]; 
            if (alphabet[c-'A'] == 0 || alphabet[c-'A'] > j+1) {
                alphabet[c-'A'] = j+1;
            }
        }
    }
    vector<int> answer;
    for (int a = 0 ; a< targets.size(); a++) {
        int sum = 0;
        bool possible = true;
        for (int b = 0 ; b<targets[a].size() ; b++) {
            char k = targets[a][b];
            if ( alphabet[k-'A'] != 0 ){
                sum += alphabet[k-'A'];
            }
            else {
                possible = false;
                break;
            }
        }
        if (possible == true ) {
            answer.push_back(sum);
        } else {
            answer.push_back(-1);
        }
    }
    return answer;
}