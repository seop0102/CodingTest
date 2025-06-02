#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int n) {
    //3진법 만들기
    string result ="";
    while (n>0) {
        int a = n % 3; 
        result = to_string(a) + result; //뒷자리부터 채우기
        n/=3;
    }
    
    int len = result.length();
    string str=""; //3진법 뒤집은 스트링
    for (int i = 0; i < len ; ++i) {
        str = result[i] + str;
    }
    
    //10진수 변환 
    int answer = 0;
    for (int j = 0; j<len ; ++j){
        answer += (str[j] - '0') * pow(3, len-j-1);
    }

    return answer;
}