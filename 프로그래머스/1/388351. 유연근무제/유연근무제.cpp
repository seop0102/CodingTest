#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    for (int i = 0 ; i < schedules.size() ; i++) {
        schedules[i] += 10;
        if (schedules[i] % 100 >= 60 ) {
            schedules[i] += 40;
        }
        int a = (13 - startday) % 7;
        int b = (14 - startday) % 7;
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
    return answer;
}