#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M ;
    map<string, int> m;
    string name;
    int price;
    for (int i = 0 ; i < N ; ++i) {
        cin >> name >> price ;
        m[name] = price;
    }
    int answer = 0;
    for (int i = 0 ; i < M ; ++i) {
        cin >> name >> price ;
        if (price > m[name] * 1.05){
            answer++;
        } 
    }
    cout << answer;
    return 0 ;
}