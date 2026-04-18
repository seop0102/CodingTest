#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<pair<int,int>> v;
    for (int i = 0 ; i < N ; i++)
    {
        int x;
        cin >> x;
        v.push_back({x,i+1});
    }
    int index = 0;
    while (!v.empty())
    {
        int number = v[index].first;
        cout << v[index].second << " ";
        
        v.erase(v.begin() + index);
        
        if (v.empty())
        {
            break;
        }
        int sz = (int)v.size();
        if (number > 0)
        {
            index = ((index + number - 1) % sz + sz) % sz;
        }
        else
        {
            index = ((index + number) % sz + sz) % sz;
        }
    }
    return 0;
}