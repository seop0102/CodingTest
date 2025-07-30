#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>


using namespace std;

bool isSosu(int n) {
    if (n < 2) return false;
    for (int i = 2 ; i <= sqrt(n) ; ++i) {
        if (n% i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    vector<int> sosuNum;
    do {
        for (int i = 1 ; i <= numbers.length(); ++i){
            int num = stoi(numbers.substr(0,i));
            sosuNum.push_back(num);
        }
    } while (next_permutation(numbers.begin(), numbers.end()));
    
    set<int> s(sosuNum.begin(), sosuNum.end());
    
    for (int k : s) {
        if (isSosu(k)) answer++;
    }
    return answer;
}