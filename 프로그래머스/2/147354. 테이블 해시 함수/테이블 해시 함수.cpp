#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int colNum;
bool sortFunction (vector<int> a, vector<int> b) {
    if ( a[colNum -1 ] != b[colNum -1]) {
        return a[colNum -1] < b[colNum -1];
    }
    return a[0] > b[0];
}

int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
    int answer = 0;
    colNum = col;
    // 1. 정렬하기
    sort (data.begin(), data.end(), sortFunction);
    // 2. Si 구하기
    vector<int> Si(data.size(),0);
    for (int idx = 0 ; idx < data.size() ; idx++ ) {
        int i = idx+1;
        int sum = 0;
        for (int v : data[idx] ) {
            sum += v % i ;
            Si[idx] = sum;
        }
    }
    // 3. 구간 구하기
    // 4. XOR 하기
    for (int idx = row_begin-1 ; idx <= row_end-1 ; ++idx ) {
        answer ^= Si[idx];
    }
     return answer;
}