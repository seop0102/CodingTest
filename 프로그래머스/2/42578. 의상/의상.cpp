#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string,int> closet;
    for(const auto& item : clothes ){
        closet[item[1]]++;
    }
    int answer = 1;
    if(closet.size() == 1) {
        answer = closet.begin()->second; 
    } else {
        for( const auto& pair : closet){
        answer *= (pair.second +1);
        }
        answer --;
    }
    return answer;
}