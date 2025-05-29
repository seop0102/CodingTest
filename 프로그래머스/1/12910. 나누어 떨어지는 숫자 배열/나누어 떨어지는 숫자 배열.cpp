#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer; //답 벡터    
  
    int a = arr.size(); //arr 크기
    int b =0;
    
    for(int i =0;i<a;i++) {
        if(arr[i] % divisor == 0 ){ //나눠지면
            answer.push_back(arr[i]); //순서 노상관에 추가
        }
        else{ //안나눠지면
            b++;
        }
    }
    if ( b== a) {
        answer.push_back(-1);//아예 없으면 -1 리턴;
    }
    else {
        //sort 함수 사용
        sort(answer.begin(),answer.end());
    }
    
    //오름차순 정렬 로직만 추가하면 됨
    
    return answer;
}