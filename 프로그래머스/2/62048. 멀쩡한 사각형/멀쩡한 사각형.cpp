#include <bits/stdc++.h>

using namespace std;

long long solution(int w,int h) {
    long long answer = 1LL * w*h;
    int g = gcd(w,h);
    answer -= w+h - g;
    return answer;
}