#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int success = 0;
    
    int nowhealth = health;
    
    int playtime = bandage[0];
    int healpersec = bandage[1];
    int plusheal = bandage[2];
    
    int idx = 0;
    for (int i = 1 ; i <= attacks[attacks.size()-1][0] ; i++ ) {
        if ( idx <attacks.size() && attacks[idx][0] == i) {
            nowhealth -= attacks[idx][1];
            if (nowhealth<=0 ) return -1;
            success = 0;
            idx++;
        } else {
            if (nowhealth<health) {
                nowhealth+=healpersec;
                if (nowhealth>health) nowhealth = health;
            }
            success ++;
            if (success == playtime) {
                nowhealth += plusheal;
                if (nowhealth>health) nowhealth=health;
                success =0;
            }
        }
    }
    return nowhealth;
}