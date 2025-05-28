using namespace std;

int solution(int n) {
    int x = n-1;
    for (int i = 2; i<= x; i++){
        if( x% i ==0 ) {
            return i;
        }       
    }
}