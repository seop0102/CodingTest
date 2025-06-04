#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int s = array.size();
    for (int i = 0; i<commands.size(); ++i) {
        vector<int> arr;
        int a = commands[i][0];
        int b = commands[i][1];
        int c = commands[i][2];
        
        for (int j = a-1 ; j<b ; ++j){
            arr.push_back(array[j]);
        }
        sort(arr.begin(),arr.end());
        answer.push_back(arr[c-1]);
        arr.clear();
    }
    return answer;
}