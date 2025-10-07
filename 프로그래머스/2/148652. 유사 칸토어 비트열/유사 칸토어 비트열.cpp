#include <string>
#include <vector>

using namespace std;

int solution(int n, long long l, long long r) {
    int answer = 0;
    for (long i = l-1 ; i <=r-1; ++i) {
        bool flag = true;
        long start = i;
        while (start >= 5) {
            if ( start % 5 == 2) {
                flag = false;
                break;
            }
            start /= 5;
            
        }
        if (start == 2) {
            flag = false;
        }
        if (flag ) {
            answer ++;
        }
    }
    return answer;
}