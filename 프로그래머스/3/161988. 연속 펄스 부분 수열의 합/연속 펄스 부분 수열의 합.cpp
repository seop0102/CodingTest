#include <string>
#include <vector>

using namespace std;

long long solution(vector<int> sequence) {
    int flag = 1;
    long long a = 0;
    long long minN = 0;
    long long maxN = 0;
    
    for (int i  = 0 ; i<sequence.size(); i++) {
        a+=flag*sequence[i];
        flag *= -1;
        
        if (minN > a ) minN =a;
        if (maxN < a ) maxN = a;
    }
    return maxN-minN;
}