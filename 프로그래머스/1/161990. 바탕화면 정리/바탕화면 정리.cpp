#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    vector<int> row; //최소값 최대값만 사용
    vector<int> col; //        |
    for (int i = 0 ; i < wallpaper.size() ; ++i) {
        for (int j = 0 ; j < wallpaper[0].size() ; ++j) {
            if(wallpaper[i][j] == '#') {
                row.push_back(i);
                col.push_back(j);
            }
        }
    }
    sort(row.begin(), row.end());
    sort(col.begin(), col.end());
    int lux = row[0];
    int luy = col[0];
    int rdx = row[row.size()-1]+1;
    int rdy = col[col.size()-1]+1;
    
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx);
    answer.push_back(rdy);
    return answer;
}