#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int len = sizes.size();
    for ( int i = 0; i<len; i++ ){
        if ( sizes[i][0]>=sizes[i][1]){
            //ok!
        }
        else{
            int temp = sizes[i][0];
            sizes[i][0]=sizes[i][1];
            sizes[i][1]=temp;
        }
    } //가로가 더 길도록 정렬하기
    int big_1=0;
    int big_2=0;
    for ( int j = 0; j<len; ++j) {
        if (sizes[j][0]>big_1) {
            big_1=sizes[j][0];
        }
        if(sizes[j][1]>big_2){
            big_2=sizes[j][1];
        }
    }
    int answer = big_1 * big_2;
    return answer;
}