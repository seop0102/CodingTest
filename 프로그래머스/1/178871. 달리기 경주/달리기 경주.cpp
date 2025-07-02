#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> nameScore;
    for (int i = 0; i < players.size(); i++ ){
        nameScore[players[i]] = i;
    }
    for (int j = 0 ; j < callings.size(); j++) {
        string name = callings[j];
        int index = nameScore[name]; //부른 선수의 현재 인덱스
        int pre = index-1;
        //swap하면됨
        swap (players[index], players[pre]);
        nameScore[name] = pre;
        nameScore[players[index]] = index;
    }
    return players;
}