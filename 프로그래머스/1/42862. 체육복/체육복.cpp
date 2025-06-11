#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> arr(n,1); //크기 n으로 초기화, 자동으로 1 채우기 {1,1,1,1,1}
    for (int i = 0; i < reserve.size(); i++) {
        arr[reserve[i]-1]++;
    } //{2,1,2,1,2}
    for (int j = 0; j < lost.size(); j++) {
        arr[lost[j]-1]--;
    } //{2,0,2,0,2}
    
    //만약 0인 애 양 옆이 2면 내거 +1, 쟤거 -1 
    for (int k = 0 ; k<n; k++) {
        if ( arr[k] == 0) { //0이면
            if ( k>0 && arr[k-1] == 2 ){ //앞 여분 
                arr[k-1]--; //앞의 애 -1
                arr[k]++;
            }else if (k<n-1 && arr[k+1]==2) { //뒤 여분
                arr[k+1]--;
                arr[k]++;
            }
        }
    }
    for (int a = 0; a<n; a++) {
        if ( arr[a] >=1) answer++;
    }
    
    return answer;
}