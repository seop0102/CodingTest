#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(),citations.end());
    int len = citations.size();
    
    for(int i = 0 ; i < len ; ++i){
        int h = len - i;
        if (citations[i] >= h ){
            return h;
        }
    }return 0;
}