#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int time (string s){
    return stoi(s.substr(0,2)) * 60 + stoi(s.substr(3,2));
}

int solution(vector<vector<string>> book_time) {
    int answer = 0; //필요한 최소 객실 수
    // 1. book_time의 각 시간을 [시작분, 퇴실분 +10분]로 변환
    vector<vector<int>> hotel;
    for (int i = 0 ; i<book_time.size(); ++i) {
        int a = time(book_time[i][0]);
        int b = time(book_time[i][1]) + 10;
        hotel.push_back({a,b});
    }
    // 2. 시작시간 기준으로 정렬
    sort(hotel.begin(), hotel.end());
    // 3. 각 방의 '다음 사용 가능 시각' 저장
    vector<int> rooms;
    
    for(int j = 0; j < hotel.size() ; ++ j) {
        int a = hotel[j][0];
        int b = hotel[j][1];
        
        bool reused = false;

        for (int k = 0; k < rooms.size(); ++k) {
            if (rooms[k] <= a) {
                rooms[k] = b; 
                reused = true;
                break;
            }
        }
        if (!reused) {
            rooms.push_back(b);
            answer ++;
        }
    }
    return answer;
}