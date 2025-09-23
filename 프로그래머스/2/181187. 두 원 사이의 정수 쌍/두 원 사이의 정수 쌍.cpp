#include <string>
#include <vector>
#include <cmath>

using namespace std;
// y=x 와 x축 사이에 있는 점 갯수 * 8

//r^2 <= n인 가장 큰 r
static long long intSqrtFloor(long long n) {
    if (n <= 0) return 0;
    long long lo = 0, hi = 1'000'000, ans = 0;
    while (lo <= hi) {
        long long mid = (lo + hi) >> 1;
        long long sq = mid * mid;
        if (sq <= n) { ans = mid; lo = mid + 1; }
        else hi = mid - 1;
    }
    return ans;
}
//r^2 >= n인 가장 작은 r
static long long intSqrtCeil(long long n) {
    if (n <= 0) return 0;
    long long r = intSqrtFloor(n);
    return (r*r == n) ? r : (r + 1);
}

long long solution(int r1, int r2) {
    long long R1 = 1LL * r1 * r1;
    long long R2 = 1LL * r2 * r2;
    
    long long A = 0;   // x 축 위에 있는 점 * 4
    long long B = 0;   // y=x 위에 있는 점 * 4
    long long C = 0;   // 0<y<x 안에 있는 점 * 8 
    
    for (long long x = 1; x <= r2; ++x) {
        long long xx = x * x;
        long long remOuter = R2 - xx;
        if (remOuter < 0) break;
        long long yMax = intSqrtFloor(remOuter);
        if (yMax > x) yMax = x;

        long long remInner = R1 - xx;
        long long yMin = (remInner > 0) ? intSqrtCeil(remInner) : 0;
        if (yMin > x) continue;

        if (yMin == 0) {
            A += 1;   // (x,0)
            yMin = 1;
        }
        if (yMin > yMax) continue;

        bool onDiag = (2*xx >= R1 && 2*xx <= R2 && yMin <= x && x <= yMax);
        if (onDiag) {
            B += 1;                   // (x,x)
            C += (yMax - yMin);       // 나머지
        } else {
            C += (yMax - yMin + 1);   // 전부 내부
        }
    }
    return 4*A + 4*B + 8*C;
}