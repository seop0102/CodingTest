#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N,K;
    cin >> N >> K;
    queue<int> q;
    vector<int> v;
    
    for (int i = 1; i<=N; i++)
    {
        q.push(i);
    }
    while (!q.empty())
    {
        int temp = 1;
        while ( temp != K)
        {
            int num = q.front();
            q.pop();
            q.push(num);
            temp++;
        }
        if ( temp == K)
        {
            v.push_back(q.front());
            q.pop();
        }
    }
    
    cout << "<";
    for (int i = 0 ; i < v.size(); i++)
    {
        if (v.size() == 1)
        {
            cout << v[0];
            break;
        }
        if (i == v.size()-1)
        {
            cout << v[v.size()-1];
            break;
        }
        cout << v[i] << ", ";
    }
    cout << ">";
    // ----------------------------------------
    return 0;
}
