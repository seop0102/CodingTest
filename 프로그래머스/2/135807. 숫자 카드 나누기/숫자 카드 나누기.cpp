#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int gcdFunction (const vector<int>& v) {
    int g = v[0];
    for (int x : v) {
        g = gcd(g,x);
    }
    return g;
}

bool isDivideNone(int g, const vector<int>& v) {
    for (int x : v ) {
        if (x%g == 0) {
            return false; //하나라도 나눠지면 조건 실패
        } 
    }
    return true; //끝까지 통과 -> 아무것도 못 나눔
}

int solution(vector<int> arrayA, vector<int> arrayB) {
    int answer = 0;

    int a = gcdFunction(arrayA);
    int b = gcdFunction(arrayB);
    
    if (isDivideNone(a, arrayB)) {
        answer = max(answer,a);
    }
    if (isDivideNone(b, arrayA)) {
        answer = max(answer, b);
    }
    return answer;
}