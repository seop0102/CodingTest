#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N, M;
    cin >> N >> M;
    vector<int> v;
    for (int i = 1; i <= N; i++)
    {
        v.push_back(i);
    }
    for (int i = 0; i < M; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        vector<int> temp;
        // 0부터 a-1 , c부터 b-1 , a부터 c-1 , b부터 마지막
        for (int j = 0 ; j < a-1 ; j++) temp.push_back(v[j]);
        for (int j = c-1 ; j < b ; j++) temp.push_back(v[j]);
        for (int j = a-1 ; j < c-1 ; j++) temp.push_back(v[j]);
        for (int j = b ; j < v.size() ; j++) temp.push_back(v[j]);
        
        v = temp;
    }     
    for (int i = 0; i < v.size() ; i++)
    {
        cout << v[i] << " ";
    }
    // ----------------------------------------
    return 0;
}
