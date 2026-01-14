#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    // 1. photo 0부터 size 까지 안에있는 원소 돌리기
    // 2. 만약 name 0부터 size 까지 있는 원소랑 같으면 그 인덱스의 yearning 더하기 
    // 3. 끝까지 하면 push back
    int len = photo.size(); //3
    for (int i = 0 ; i < len ; i++) {
        int total = 0;
        int k = photo[i].size();
        for (int j = 0 ; j < k ; j++) {
            for (int n = 0 ; n< name.size(); n++) {
                if (photo[i][j] == name[n]) {
                    total += yearning[n];
                }
            }
        }
        answer.push_back(total);
    }
    return answer;
}