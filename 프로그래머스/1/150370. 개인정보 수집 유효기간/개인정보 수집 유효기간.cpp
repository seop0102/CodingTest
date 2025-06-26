#include <string>
#include <vector>

using namespace std;

int calToday(string date) {
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));
    //연도, 월, 일 만들었음
    return year * 12 * 28 + (month-1) * 28 + day;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int todayDate = calToday(today); // 오늘 날짜 계산
    int alphabet[26] = {0};
    
    for (int i = 0; i < terms.size(); i++) {
        alphabet[terms[i][0] - 'A'] = stoi(terms[i].substr(2));
    }
    
    for (int i = 0 ; i < privacies.size(); i++){
        string date = privacies[i].substr(0,10); //유효기간 날짜 계산
        int start= calToday(date); // 오늘 날짜 계산 
        
        char c = privacies[i][11] ; //프라이버시의 알파벳
        int endDate = start + alphabet[c-'A']*28 -1 ; //오늘날짜에 
        if ( endDate < todayDate) {
            answer.push_back(i+1);
        }    
    }
    return answer;
}