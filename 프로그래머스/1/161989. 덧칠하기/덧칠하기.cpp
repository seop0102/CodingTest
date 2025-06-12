#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    //길이가 n미터인 벽, 일부만 칠해서 페인트 아낌, 벽을 1미터 길이의 n개로 나눔
    //왼쪽부터 1번...n번, 롤러 길이는 m, 
    vector<int> arr(n,1); //길이 n 만큼 채우기
    for (int i = 0; i<section.size(); i++) {
        arr[section[i]-1]=0; //섹션에 포함된 곳 빼기 (칠해야함)
    }
    int answer = 0;
    for (int j = 0; j < n ; j++) {
        if ( arr[j] == 0)
            {
                answer++; //+1하고 
                for (int k=0; k<m && (j+k) < n; k++){ //칠하기
                    arr[j+k]=1;
                }
            }
    }
    return answer;
}