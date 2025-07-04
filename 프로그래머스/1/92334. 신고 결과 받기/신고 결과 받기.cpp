#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    
    //1. report를 sort후 unique써서 중복 값 제거
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()), report.end());
    
    //2. 가해자 key, 신고자 value로 map 생성
    map<string, vector<string>> report_map;
    for (string r : report){
        string a = r.substr(0, r.find(" ")); // 신고자
        string b = r.substr(r.find(" ")+1); //가해자
        report_map[b].push_back(a); 
    }
    //3. 가해자 벡터 만들기
    vector<string> banned;
    
    //4. k 보가 크면 벡터에 추가
    for (const auto& pair : report_map){
        if ( pair.second.size() >= k){
            banned.push_back(pair.first);
        }
    }
    //5. id_list별로 map만들기 value는 모두 0
    map<string, int> getMail;
    for(const string& key : id_list){
        getMail[key] = 0;
    }
    //6. banned 1부터 끝까지 탐색 report_map의 key
    //7. value의 map의 value에 ++
    //정지된 유저를 신고한 사람들에게 메일 보내기
    for ( const string& ban : banned) { //정지된 사람
        for (const string& call : report_map[ban]){
            getMail[call]++;
        }
    }
    //8. getMail value값 answer push_back
    for (const string& id : id_list) {
        answer.push_back(getMail[id]);
    }
    
    return answer;
}