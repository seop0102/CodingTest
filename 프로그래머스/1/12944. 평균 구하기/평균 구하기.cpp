#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double a = arr.size();
    double total=0.0;
    for (int i = 0; i<a; i++) {
        total += arr[i];
    }
    double answer = total / a;
    return answer;
}