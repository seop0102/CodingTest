#include <numeric>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    int a = gcd(n,m); //최대공약수
    int b = lcm(n,m); //최소공배수
    
    vector<int> answer;
    answer.push_back(a);
    answer.push_back(b);
    return answer;
}