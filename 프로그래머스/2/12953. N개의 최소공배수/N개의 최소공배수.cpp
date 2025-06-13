#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr) {
    int a = arr[0];
    for (int i = 1 ; i < arr.size(); i++) {
        a = lcm(a, arr[i]);
    }
    return a;
}