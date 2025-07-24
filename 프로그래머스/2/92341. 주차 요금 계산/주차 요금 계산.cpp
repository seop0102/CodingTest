#include <string>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;

int time (string t) {
    return stoi(t.substr(0,2)) * 60 + stoi(t.substr(3,2));
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer; //번호 작은 순으로 돈 넣을 벡터
    unordered_map<string,int> IN; //IN 인 애들 넣기
    map<string,int> money; //돈 낼 애들, 주차시간
    
    for ( int i = 0 ; i < records.size(); ++i) {
        string t = records[i].substr(0,5); // 00:00
        string car = records[i].substr(6,4); // 0000
        
        int minute = time(t); //분으로 변환
        
        if (records[i][11] =='I') {
            //IN
            IN[car] = minute;
        } else {
            //OUT
            money[car] += minute - IN[car];
            IN.erase(car);
        }
    }
    if (IN.size() > 0) {
        for (auto& pair : IN) {
            string car = pair.first;
            int minute = pair.second;
            money[car] += (23 * 60 + 59 - minute);
        }
    }

    for (auto& pair : money) {
        int t = pair.second;
        int m = fees[1]; //기본 시간, 기본 요금. 단위시간, 단위요금
        if (t > fees[0]) {
            //기본 시간 이상이면
            m = m+((t - fees[0] + fees[2] - 1) / fees[2]) * fees[3];
        }
        answer.push_back(m);
    }
    
    return answer;
}