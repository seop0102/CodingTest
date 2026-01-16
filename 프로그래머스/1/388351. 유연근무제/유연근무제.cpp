#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    // 1. 스케쥴 사이즈 = n
    int n = schedules.size(); 
    // 2. 스케쥴 벡터의 모든 원소에 +10, 만약 스케쥴[i]%100 >= 60 이면 -60하고 +100 (분빼고 시간)
    for (int x = 0 ; x < n ; x++) {
        schedules[x] += 10;
        if (schedules[x] % 100 >= 60 ) {
            schedules[x] -= 60; // 분
            schedules[x] += 100; // 시간
        }
    }
    // 3. for 문을 0 부터 n까지 돌리기
    for (int i = 0 ; i < n ; i++) {
        int a = (13 - startday) % 7; //토요일
        int b = (14 - startday) % 7; //일요일
        int total = 0;
        for (int j = 0 ; j < 7 ; j++) {
            if ( j == a || j == b) {
                continue;
            } else {
                if ( schedules[i] >= timelogs[i][j] ) {
                    total ++;
                } else {
                    continue; 
                }
            }
        } 
        if ( total == 5) {
            answer++;
        }
    }
    // 4. 토요일 a , 일요일 b 를 정의해서 인덱스가 a나 b면 뛰어넘기
    //    구하는 방법 : (13-startday)%7 = 토요일, (14-startday)%7 = 일요일
    // 5. schedules[i] >= timelogs[i][j] 면 넘어가고 하나라도 아니면 바로 break.
    // 6. 전체가 다 넘어가지면 answer ++;
    
    return answer;
}