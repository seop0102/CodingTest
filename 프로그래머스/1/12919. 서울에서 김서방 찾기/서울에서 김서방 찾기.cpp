#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int a = seoul.size();
    int b = 0;
    for (int i = 1 ; i < a ; i++ ){
        if (seoul[i] =="Kim"){
            b=i;
        }
    }
    string answer = "김서방은 "+to_string(b)+"에 있다";
    return answer;
}