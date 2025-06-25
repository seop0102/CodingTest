#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int row = arr1.size(); //행
    int x = arr1[0].size();//arr1의 열 개수는 arr2의 행 개수랑 같아야 됨!
    int col = arr2[0].size();//렬
    vector<vector<int>> answer(row,vector<int>(col,0));
    //row,col의 행렬을 만드는 것임
    for (int i = 0; i<row ; i++) {
        for (int j = 0; j<col ; j++) {
            for (int k = 0 ; k < x ; k++) {
                answer[i][j] += arr1[i][k] * arr2[k][j];
            }
            
        }
    }
    return answer;
}