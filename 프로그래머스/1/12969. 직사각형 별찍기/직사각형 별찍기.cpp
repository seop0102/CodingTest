#include <iostream>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <=m; ++i){
        for (int j = 1; j<= n; ++j){
            cout<<"*";
        }cout<<endl;
    }
    return 0;
}