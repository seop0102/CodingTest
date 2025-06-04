#include <string>
using namespace std;

int solution(string t, string p) {
    int a = p.length(); // 찾아야하는 문자열 길이
    int b = t.length();
    int sum = 0;
    for (int i = 0 ; i <= b-a ; i++ ) {
        string str ="";
        for (int j = 0 ; j<a ; ++j){
            str += t[i+j];
        }
        if ( str<= p ){
            sum ++;
        }
    }
    return sum;
}