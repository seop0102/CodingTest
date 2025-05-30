#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int len = a.size();
    int sum = 0;
    for (int i = 0 ; i < len ; i++) {
        sum += a[i] * b[i];
    }
    return sum;
}