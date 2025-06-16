#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int numX[10] = {0};
    int numY[10] ={0};
    for (int a = 0; a<X.length(); a++) {
        numX[X[a]-'0']++;
    }
    for(int b = 0 ; b<Y.length(); b++) {
        numY[Y[b]-'0']++;
    }
    
    //numX,numY의 0부터 9까지 인덱스 값을 비교하여 최소값을 다시 배열에 저장
    int arr[10]={0};
    for (int i = 0 ; i< 10; i++) {
        if ( numX[i] >= numY[i]) {
            arr[i] = numY[i];
        }
        else {
            arr[i] = numX[i];
        }
    }
    for (int j = 9; j>=0 ; j--) {
        for(int k = 0; k< arr[j] ; k++) {
            answer+=to_string(j);
        }
    }
    if( answer =="") {
        return "-1";
    }else if (answer[0]=='0'){
        return "0";
    } else {
    return answer; }
}