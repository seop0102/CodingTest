#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int solution(string name) {
    int answer = 0;
    int n = name.size();
    
    for (char c : name) {
        int up = c-'A';
        int down = 'Z' - c + 1;
        answer += min(up,down);
    }
    
    int move = n-1 ; //오른쪽으로만 끝까지 이동하면 n-1됨
    for (int i = 0 ; i < n ; ++i) {
        int next = i+1;
        while (next < n && name[next]=='A') {
            next++;
        }
        int behind = i+n-next+min(i,n-next);
        move = min(move,behind);
    }
    answer+=move;
    
    return answer;
}