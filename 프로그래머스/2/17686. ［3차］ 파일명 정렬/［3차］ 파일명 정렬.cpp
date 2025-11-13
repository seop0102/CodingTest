#include <string>
#include <vector>
#include <algorithm> //sort
#include <cctype> //isdigit, tolower

using namespace std;

//파일명을 head number tail로 나누는 함수 
pair<string, int> divide_file(string file){
    string head = "";
    string strnum = "";
    
    int idx = 0;
    //head
    while (idx < file.length() && !isdigit(file[idx])) {
        head += tolower(file[idx]);
        idx++;
    }
    //number
    while (idx < file.length() && isdigit(file[idx]) && strnum.length() < 5 ) {
        strnum += file[idx];
        idx++;
    }
    return {head, stoi(strnum)}; //pair로 리턴
    
}

vector<string> solution(vector<string> files) {
    vector<string> answer;
    vector<pair<pair<string,int>,int>> F;
    for (int i = 0 ; i < files.size(); i++) {
        auto f = divide_file(files[i]);
        F.push_back({f, i} ); //{{head,number},현재index} 저장
    }
    // 정렬 기준 : head > number > 현재 index
    sort (F.begin(), F.end(), [] (const pair<pair<string,int>,int>& a, 
                               const pair<pair<string,int>,int>& b) {
        if ( a.first.first != b.first.first) { //head
            return a.first.first < b.first.first;
        }
        if (a.first.second != b.first.second) { // number
            return a.first.second < b.first.second;
        } 
        return a.second < b.second; //index
    });
    //정렬 후 index 활용해서 answer에 push_back
    for (auto& x : F ) {
        int i = x.second;
        answer.push_back(files[i]);
    }
    return answer;
}