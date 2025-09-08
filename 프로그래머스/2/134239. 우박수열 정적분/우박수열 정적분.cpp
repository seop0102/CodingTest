#include <string>
#include <vector>

using namespace std;

vector<double> solution(int k, vector<vector<int>> ranges) {
    vector<double> answer;
    
    int n = 0 ;
    vector<long long> arr;
    arr.push_back(k);
    while ( k != 1 ) {
        if ( k % 2 == 0 ) k/=2;
        else k = k * 3 + 1;
        ++n;
        arr.push_back(k);
    }

    vector<double> prefix(n+1, 0.0);
    for (int i = 0 ; i < n ; i++) {
        double area = (arr[i]+ arr[i+1]) / 2.0;
        prefix[i+1] = prefix[i] + area;
    }
    answer.reserve(ranges.size());
    for ( const auto& r : ranges) {
        int a = r[0];
        int end = n + r[1];
        
        if ( a>end || a < 0 || end>n) {
            answer.push_back(-1.0);
        } else {
            answer.push_back(prefix[end] - prefix[a]);
        }
    }
    return answer;
}