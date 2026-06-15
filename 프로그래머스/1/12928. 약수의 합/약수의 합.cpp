#include <string>
#include <vector>

using namespace std;

int yaksu(int x) {
    int sum = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            sum += i;
            if (i != x / i) sum += x / i; 
        }
    }
    return sum;
}

int solution(int n) {
    return yaksu(n);
}