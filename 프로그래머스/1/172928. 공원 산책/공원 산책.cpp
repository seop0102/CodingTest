#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer; 
    int row = park.size(); //공원 행
    int col = park[0].size(); //공원 렬
    int x,y = 0; //Start 위치
    for (int i = 0 ; i <row ; i++ ) {
        if ( park[i].find("S")!= string::npos ) {
            x = i ;
            y = park[i].find("S");
            break;
        } else{
            continue;
        }
     } //Start(x,y)
    
    
    for (int i = 0 ; i <routes.size(); i++) {
        int move = routes[i][2]-'0'; //몇칸 이동하는지
        int nx = x;
        int ny = y;
        if (routes[i][0] == 'N') { //위
            for (int j = 0; j< move ; j++ ) {
                x--;
                if ( park[x][y] == 'X' || x<0) {
                    x =nx;
                    y= ny;
                    break;
                }
            }
        }else if (routes[i][0] == 'E') { // 오른쪽 
            for (int j = 0 ; j<move ; j++){
                y++;
                if(park[x][y] =='X' || y>=col) {
                    x =nx;
                    y= ny;
                    break;
                }
            }
            
        }else if (routes[i][0] == 'S') { // 아래
            for (int j = 0 ; j<move ; j++) {
                x++;
                if (park[x][y] == 'X' || x>=row) {
                    x =nx;
                    y= ny;
                    break;
                    
                }
            }
        }else if (routes[i][0] == 'W') { // 왼쪽
            for (int j = 0 ; j<move; j++) {
                y--;
                if( park[x][y] =='X' || y<0) {
                    x =nx;
                    y= ny;
                    break;
                }
            }
        }
    }
    
    answer.push_back(x);
    answer.push_back(y);
    
    
    return answer;
}