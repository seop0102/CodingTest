#include <string>
#include <vector>

using namespace std;

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    
    vector<vector<int>> arr(rows,vector<int>(columns));
    for (int i = 0 ; i< rows; ++i) {
        for (int j = 0; j<columns ; ++j) {
            arr[i][j] = i*columns + j+1;
        }
    }
    for ( auto q : queries ){
        int x1 = q[0] -1;
        int y1 = q[1] -1;
        int x2 = q[2] -1;
        int y2 = q[3] -1;
        
        int prev = arr[x1][y1];
        int minVal=prev;
        
        // 왼쪽 세로 
        for (int i = x1; i < x2; i++) {
            arr[i][y1] = arr[i+1][y1];
            minVal = min(minVal, arr[i][y1]);
        }
        // 아래 가로 
        for (int j = y1; j < y2; j++) {
            arr[x2][j] = arr[x2][j+1];
            minVal = min(minVal, arr[x2][j]);
        }
        // 오른쪽 세로
        for (int i = x2; i > x1; i--) {
            arr[i][y2] = arr[i-1][y2];
            minVal = min(minVal, arr[i][y2]);
        }
        // 위 가로
        for (int j = y2; j > y1+1; j--) {
            arr[x1][j] = arr[x1][j-1];
            minVal = min(minVal, arr[x1][j]);
        }
        arr[x1][y1+1] = prev; // 시작값 마지막에 넣기

        answer.push_back(minVal);
    }
    
    return answer;
}