using namespace std;

int solution(int n) {
    int total = 0;
    for (int i = 1; i<=n; i++) {
        if ( n%i == 0) { //12%1 0 12%2 0 12%3 0 12%4 0 12%5 2 
            total += n/i;
        }
        else {
        }
    }
    return total;
}