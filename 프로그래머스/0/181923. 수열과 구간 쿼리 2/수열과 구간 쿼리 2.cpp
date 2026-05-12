#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> result;
    for (int i = 0 ; i < queries.size(); i++) {
        int one = queries[i][0];
        int two = queries[i][1];
        int x = queries[i][2];
        vector<int> v;
        for (int j = one; j <= two; j++) {
            if (arr[j] > x) {
                v.push_back(arr[j]);
            }
        }
        if (v.size() == 0) {
            result.push_back(-1);
            continue;
        }
        sort(v.begin(),v.end());
        result.push_back(v[0]);
    }
    return result;
}