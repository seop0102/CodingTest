#include <string>
#include <vector>

using namespace std;

int yaksu(int num) {
    int sum = 0;
    for (int i = 1 ; i*i<=num ; i++)  {
        if ( num % i == 0) {
            sum += 2;
            if (i*i == num ) sum--; //제곱수면 하나 빼줌
        }
    }
    return sum ;
}

int solution(int number, int limit, int power) {
    vector<int> arr;
    int answer=0;
    for (int j = 1; j<=number ; j++) {
        arr.push_back(yaksu(j));
        if ( arr[j-1] >limit) {
            arr[j-1] = power ;
        }
        answer +=arr[j-1];
    }
    return answer;
}