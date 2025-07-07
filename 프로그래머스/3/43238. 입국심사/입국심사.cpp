#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    //이분탐색 최소시간은 times[0] , 최대시간은 times[times.size()-1]
    long long left = 1;
    sort (times.begin(), times.end());
    long long right = (long long)times[times.size()-1] * n;
    long long answer = right;
    while (left <= right) {
        long long mid = (left + right) /2 ;
        long long sum = 0;
        
        for (int t : times ) {
            sum += mid / t;
        }
        if (sum >= n ){
            answer = mid;
            right = mid -1 ;
            
        }else {
            left = mid+1;
        }
    }
    // answer 은 [최소,최대] 사이에 있음
    // mid는 (times[0] + times[마지막]) / 2 
    // mid / times 원소해서 더하기
    // 만약 n보다 크면 시간을 줄이고
    // n보다 작으면 시간을 늘림
    
    return answer;
}