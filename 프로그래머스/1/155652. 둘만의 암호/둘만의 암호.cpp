#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    vector<char> alphabet;
    for ( char c = 'a' ; c<='z'; c++) {
        bool isskip = false;
        for ( char ch : skip ){
            if (c == ch) { //알파벳을 추가하려는데 skip에 있는 애면 뛰어넣음
                isskip = true;
                break;
            }
        }
        if (isskip == false ) {
            alphabet.push_back(c);
        }
    } //skip에 있는 애들 뺀 알파벳 배열
    
    for ( char word : s) {
        int position = 0;
        for (int i = 0 ; i < alphabet.size(); i++) {
            if( alphabet[i] == word ){
                position = i ;
                break;
            }
        }
        int newposition = (position+index) % alphabet.size();
        answer += alphabet[newposition];
    }
    return answer;
}