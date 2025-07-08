#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
    int n = elements.size();
    //elements를 두번 이어붙여 원형으로
    vector<int> elements_2 = elements;
    elements_2.insert(elements_2.end(), elements.begin(), elements.end());
    //누적합
    vector<int> prefix(elements_2.size()+1 , 0);
    for(int i =1; i<= elements_2.size(); ++i) {
        prefix[i] = prefix[i-1] + elements_2[i-1]; }
    //수열합저장
    unordered_set<int> sum_set;
    for(int length=1; length<=n; ++length) {
        for (int i = 0 ; i < n ; ++i) {
            int sum =prefix[i+length] - prefix[i];
            sum_set.insert(sum);
        }
    }
    return sum_set.size();
} 