#include <string>
#include <vector>

using namespace std;

int solution(int storey) {
    int answer = 0;
    
    //1의 자리 숫자부터 올릴지 버릴지 정하기
    int num = storey;
    
    while (num > 0 ) {
        int n = num%10; //일의 자리
        int m = (num/10) % 10; //십의 자리
        if ( n < 5) {
            //내리기
            answer += n;
            num /= 10;
        } else if ( n > 5 ) {
            //올리기
            answer += 10 - n;
            num = num / 10 + 1; //carry
        } else { //n이 5일때 
            if ( m >= 5) {
                //올리기
                answer += 5;
                num = num/10 +1;
            } else {
                //내리기
                answer += 5;
                num /= 10;
            }
        }
    }
    return answer;
}