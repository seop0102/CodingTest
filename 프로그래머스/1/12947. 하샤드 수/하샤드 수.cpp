#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer;
    int number = x;
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    while(x>0){
        int a = x % 10;
        arr[a]++;
        x/=10;
    }
    int sum = 0;
    for (int i = 0; i<10; i++){
        sum += arr[i] * i;
    }
    if ( number % sum == 0){
        answer = true;
        return answer;
    }
    else{
        answer = false;
        return answer;
    }
}