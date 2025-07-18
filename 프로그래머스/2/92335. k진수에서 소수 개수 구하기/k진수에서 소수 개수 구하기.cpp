#include <string>
#include <vector>

using namespace std;

string kjinsu(int n, int k) { //k진수 변환 함수
    string result ="";
    while (n > 0) {
        result = to_string(n%k) + result;
        n /= k;
    }
    return result;
}

bool isSosu(long long num) { //소수 판별 함수 
    if (num<2) return false;
    if (num == 2 || num ==3 ) return true;
    if (num % 2 == 0 || num% 3 == 0) return false;
    
    for(long long i = 5; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int sosu(vector<long long> arr) { //소수 갯수 세는 함수
    int sum = 0;
    for (long long n : arr ) {
        if (isSosu(n) == true ) {
            sum++;
        }
    } 
    return sum;
}
int solution(int n, int k) {
    string number = kjinsu(n,k);
    vector<long long> arr;
    string temp = "";
    for (char c : number) {
        if ( c=='0') {
            if (!temp.empty()) {
                arr.push_back(stoll(temp));
                temp ="";
            }
        }else {
            temp += c;
        }
    }
    if (!temp.empty()) { //마지막 숫자 처리
        arr.push_back(stoll(temp)); 
    }
    int answer = sosu(arr);
    return answer;
}