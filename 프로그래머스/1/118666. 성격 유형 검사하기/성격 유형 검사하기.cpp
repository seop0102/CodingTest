#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    vector<vector<string>> mbti = {{"R","0"},{"T","0"}, {"C","0"},{"F","0"},{"J","0"},{"M","0"},{"A","0"},{"N","0"} };
    //   R T   /   C F   /    J M    /    A N      벡터 만들기
    // choice 1-> 3점, 2-> 2점, 3-> 1점 ////// 5-> 1점, 6->2점, 7->3점  | 4-초이스, 초이스-4점씩
    for (int i = 0 ; i < survey.size() ; i++) {
        string a = survey[i];
        string x=string(1,a[0]); //survey의 왼쪽 알파벳
        string y=string(1,a[1]); //survey의 오른쪽 알파벳
        
        if (choices[i] < 4) { //왼쪽거를 score만큼 
            int score = 4 - choices[i];
            for ( int j = 0 ; j < 8 ; j++ ){
                if ( mbti[j][0] == x){
                    int num = stoi(mbti[j][1]);
                    mbti[j][1] = to_string(num+score);
                    break;
                }
            }
        }
        
        else if ( choices[i] > 4 ) { //오른쪽거
            int score = choices[i]-4;
            for ( int j = 0 ; j < 8 ; j++ ){
                if ( mbti[j][0] == y){
                    int num = stoi(mbti[j][1]);
                    mbti[j][1] = to_string(num+score);
                    break;
                }
            }
        }
    }
    for (int k = 0 ; k <=6 ; k+=2) {
        int left = stoi(mbti[k][1]);
        int right = stoi(mbti[k+1][1]);
        if (left >= right) {
            answer+=mbti[k][0];
        }else {
            answer+=mbti[k+1][0];
        }
    }
    return answer;    
}