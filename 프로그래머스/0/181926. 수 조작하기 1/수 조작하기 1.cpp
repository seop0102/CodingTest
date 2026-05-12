#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for (int i = 0 ; i < control.length(); i++) {
        char x = control[i];
        if (x=='w') n++;
        if (x=='s') n--;
        if (x=='d') n+=10;
        if (x=='a') n-=10;
    }
    return n;
}