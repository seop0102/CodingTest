#include <string>
#include <vector>

using namespace std;

int makeTime(string time){
    return stoi(time.substr(0,2)) * 60 + stoi(time.substr(3,2));
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    int len = makeTime(video_len);
    int now = makeTime(pos);
    int start = makeTime(op_start);
    int end = makeTime(op_end);
    
    if ( start <= now && now<= end) {
        now = end;
    }
    for (int i = 0 ; i < commands.size() ; ++i) {
        if (commands[i] == "next") {
            now += 10;
            if ( start <= now && now<= end) {
                now = end;
            }
            if ( now > len) {
                now = len;
            }
        }else if ( commands[i] == "prev") {
            now -= 10;
            if ( start <= now && now<= end) {
                now = end;
            }
            if ( now < 0 ) {
                now = 0;
                if ( start <= now && now<= end) {
                    now = end;
                }
            }
        }
    }
    if ( start <= now && now<= end) {
        now = end;
    }
    int min = now / 60;
    int sec = now % 60 ;
    if (min < 10 ) {
        answer+="0";
    }
    answer+= to_string(min);
    answer+=":";
    if( sec < 10) {
        answer += "0";
    }
    answer += to_string(sec);
    return answer;
}