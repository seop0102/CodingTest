#include <string>
#include <vector>
#include <algorithm>


using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    vector<string> vec = {"code","date","maximum","remain"};
    
    int extnum = 0;
    int sortnum = 0;
    
    for (int i = 0 ; i < 4 ; i++ ) {
        if ( ext == vec[i]) extnum = i; 
        if ( sort_by == vec[i]) sortnum = i;
    }
    
    for (int j = 0 ; j < data.size(); j++ ){
        if (data[j][extnum] < val_ext) {
            answer.push_back(data[j]);
        }
    }
    sort(answer.begin(), answer.end(),
        [sortnum](const vector<int>& a, const vector<int>& b) {
            return a[sortnum] < b[sortnum];
        });
    return answer;
}