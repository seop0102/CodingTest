#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    int arr[2] = {0,0};
    for (int i = 3 ; i * i <= sum ; i++) {
        if (sum % i == 0) { 
            arr[0] = i-2;
            arr[1] = (sum/i)-2;
            if ( arr[0] * arr[1] == yellow) {
                answer.push_back(arr[1]+2);
                answer.push_back(arr[0]+2);
            }
        }
    }
    return answer;
}