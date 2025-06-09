#include <string>

using namespace std;

string solution(int a, int b) {
    string days[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    //2월이 29일까지 있어서 366인 년을 윤년이라고 함
    int month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int today = 5;
    for ( int i = 0; i< a-1; i++) {
        today += month[i]; 
    }
    today += b-1;
    string answer = days[today%7];
    return answer;
}