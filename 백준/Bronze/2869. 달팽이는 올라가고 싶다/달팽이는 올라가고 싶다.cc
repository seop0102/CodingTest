#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int A,B,V;
    cin>>A>>B>>V;
    // 낮 A 미터, 밤 B 미터, V가 높이
    int day = (V-A + (A-B) -1) / (A-B) + 1;
    cout<<day;
    // ----------------------------------------
    return 0;
}