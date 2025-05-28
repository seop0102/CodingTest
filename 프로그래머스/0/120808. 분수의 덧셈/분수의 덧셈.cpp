#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int a = denom1 * denom2;
    int b = denom1 * numer2 + numer1 * denom2;
    int x = gcd(a,b);
    answer.push_back(b/x);
    answer.push_back(a/x);
    return answer;
}