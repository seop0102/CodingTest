#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string,int> wantMap;
    for (int i = 0; i < want.size(); ++i){
        wantMap[want[i]] = number[i];
    }
    
    for (int j = 0 ; j <= discount.size() -10; ++j) {
        map<string,int> tempMap;
        vector<string> tempArr(discount.begin()+j, discount.begin() +j + 10);
        for (const string& item : tempArr) {
            tempMap[item]++;
        }
        
        if ( tempMap == wantMap) {
            answer++;
        }
    } 

    return answer;
}