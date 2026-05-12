#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (int i = 0 ; i < queries.size() ; i++) {
        int x = queries[i][0]; // 0
        int y = queries[i][1]; // 3
        int temp = arr[x]; // 0
        arr[x] = arr[y];
        arr[y] = temp;
    }
    return arr;
}