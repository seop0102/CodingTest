#include <string>
#include <vector>

using namespace std;

vector<int> answer(2); //[0개수, 1개수]

void square(const vector<vector<int>>& arr, int x, int y , int size) {
    int first = arr[x][y]; //영역의 첫번째 값
    bool allSame = true; 
    for (int i = x ; i < x+size ; i++) {
        for (int j = y; j < y+size; j++) {
            if (arr[i][j] != first) {
                allSame = false;
                break;
            }
        }
        if (!allSame) break;
    }
    if (allSame) {
        answer[first]++;
    } else {
        int half = size /2;
        square(arr,x,y,half); // 왼 위
        square(arr, x, y + half, half); //오른 위
        square(arr, x + half, y, half); //왼 아래 
        square(arr, x + half, y + half, half);  //오른 아래
    }
}

vector<int> solution(vector<vector<int>> arr) {
    answer={0,0};
    square(arr,0,0,arr.size());
    return answer;
}