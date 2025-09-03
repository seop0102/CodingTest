#include <string>
#include <vector>

using namespace std;

long long solution(int k, int d) {
    long long answer = 0;
    long long K = k;
    long long D = d;
    long long maxIdx = D/K;
    
    long long j = maxIdx;
    long long D2 = D*D;
    
    for (long long i = 0 ; i <= maxIdx ; ++i) {
        long long x = K*i;
        long long x2 = x*x;
        
        while (j>=0) {
            long long y = K*j;
            long long y2 = y*y;
            if (x2+y2 <=D2) {
                break;
            }
            --j;
        }
        answer += (j+1); 
    }
    
    return answer;
}