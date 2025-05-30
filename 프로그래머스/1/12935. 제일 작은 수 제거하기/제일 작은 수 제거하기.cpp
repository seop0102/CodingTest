#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int a = arr.size();
    int k = 0;
    if ( a==1) {
        return vector<int>{-1};
    }
    else {
        int small = arr[0];
        for ( int i = 1; i<a;i++){
            if ( small > arr [i]) {
                small = arr [i];
                k = i;
            }
        }
    }
    arr.erase(arr.begin()+k);
    return arr;
}