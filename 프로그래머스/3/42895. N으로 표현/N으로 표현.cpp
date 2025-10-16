#include <string>
#include <vector>
#include <set>

using namespace std;

int makeNum (int N, int i) {
    int x= 0;
    for (int k = 0 ; k < i ; ++k) {
        x= x*10 +N;  
    }
    return x;
}
int solution(int N, int number) {
    if (N == number) return 1;
    vector<set<int>> dp(9);
    for (int i = 1; i<=8; ++i) {
        int concat = makeNum(N,i);
        dp[i].insert(concat);
        if (concat == number ) return i;
        
        for (int a = 1; a< i ; ++a) {
            int b = i - a;
            for (int x : dp[a]) {
                for (int y : dp[b]) {
                    dp[i].insert(x + y);
                    dp[i].insert(x - y);
                    dp[i].insert(y - x);
                    dp[i].insert(x * y);
                    if (y != 0) dp[i].insert(x / y); 
                    if (x != 0) dp[i].insert(y / x);
    }
            }
        }
        if (dp[i].count(number)) return i; 
    }
    
    return -1;
}