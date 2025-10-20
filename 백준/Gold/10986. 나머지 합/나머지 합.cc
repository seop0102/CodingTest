#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    vector<long long> prefix(N+1, 0);
    
    for (int i = 1 ; i<= N; ++i) {
        long long A ;
        cin >> A;
        prefix[i] = (prefix[i-1] + A) % M; //누적합의 나머지
    }
    
    vector <long long> r(M,0);
    for (int i = 0 ; i <= N ; ++i) {
        r[prefix[i]]++;
    }
    long long answer = 0;
    //같은 나머지끼리 2개를 고르는 조합 수를 모두 더하기 
    for ( int j = 0 ; j<M ; ++j) {
        long long c = r[j];
        answer += c * (c-1) /2;
    }
    cout << answer <<'\n';
    
    return 0;
}