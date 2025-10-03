#include <string>
#include <vector>

using namespace std;

static bool win ( const vector<string>& b , char c) {
    // 가로가 다 같으면 승리
    for (int i = 0; i< 3 ; i++) {
        if (b[i][0] == c &&  b[i][1] == c && b[i][2] == c) {
            return true;
        }
    }
    //세로가 다 같으면 승리
    for (int j = 0 ; j < 3 ;j++) {
        if (b[0][j] == c && b[1][j] == c && b[2][j] == c ) {
            return true;
        }
    }
    // 대각선이 다 같으면 승리
    if (b[0][0] == c && b[1][1] == c && b[2][2] == c) {
        return true;
    }
    if (b[0][2] == c && b[1][1] == c && b[2][0] == c) {
        return true;
    }
     
    //다 충족 못하면 false
    return false;
}

int solution(vector<string> board) {
    int OCount = 0 ;
    int XCount = 0;
    for (int i = 0 ; i < 3 ; ++i) {
        for (int j = 0 ; j<3 ; ++j) {
            if (board[i][j] == 'O') {
                ++OCount;
            } else if (board[i][j]=='X') {
                ++XCount;
            }
        }
    }
    
    // 개수 판별
    if ( !(OCount == XCount || OCount == XCount +1)) {
        return 0;
    }
    bool OWin = win(board, 'O');
    bool XWin = win(board, 'X');
    
    //동시 승리는 불가능
    if (OWin&& XWin) {
        return 0;
    }
     
    // 승리와 개수 판정 
    if (OWin && OCount != XCount +1 ) {
        return 0;
    }
    if (XWin && XCount != OCount) {
        return 0;
    }
    
    //이 예외들 빼면 다 가능
    return 1;
    
}