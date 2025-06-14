#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    // 1. yellow 박스의 x축 갯수 * 2 + y축 갯수 * 2  + 모서리 4 개  == brown 갯수
    // 2. brown+yellow 큰 박스의 약수 쌍. 만약 순서쌍 값의 각각 -2해서 곱한 값이 yellow면 return
    int sum = brown + yellow;
    int arr[2] = {0,0};
    for (int i = 3 ; i * i <= sum ; i++) {
        if (sum % i == 0) {
            //약수면 
            arr[0] = i-2;
            arr[1] = (sum/i)-2;
            if ( arr[0] * arr[1] == yellow) {
                answer.push_back(arr[1]+2);
                answer.push_back(arr[0]+2);
            }
        }
        else {
            //약수가 아니면 
        }
    }
    return answer;
}