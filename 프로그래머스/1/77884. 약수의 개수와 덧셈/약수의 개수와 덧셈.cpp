using namespace std;

int solution(int left, int right) {
    int answer=0;
    for ( int i = left ; i <= right ; i++) { // 13,17
        int sum = 0; //약수 갯수
        for (int j = 1; j<=i ; j++){ //약수 갯수 구하기
            if ( i%j == 0) {
                sum ++;   
            }
        }
        if ( sum %2 == 0) {
            answer += i;
        }
        else {
            answer -= i;
        }
    }
    return answer;
}