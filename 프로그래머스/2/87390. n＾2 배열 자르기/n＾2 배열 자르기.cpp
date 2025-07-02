#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> arr;
    for (long long i = left ; i <= right ; i++) {
        int row = i / n ; 
        int col = i % n ;
        arr.push_back(max(row,col)+1);
    }
    return arr;
}
