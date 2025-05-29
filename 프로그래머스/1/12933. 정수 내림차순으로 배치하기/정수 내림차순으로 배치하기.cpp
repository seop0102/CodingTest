#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    while (n>0) {
        int a = n % 10;
        arr[a] ++ ;
        n /= 10;
    }
    long long answer = 0;
    for (int i=9; i>=0; i--){
        while ( arr[i] > 0 ) {
            answer = answer * 10 + i;
            arr[i]--;
        }
    }
    return answer;
}