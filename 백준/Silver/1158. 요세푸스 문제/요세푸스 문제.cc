#include <iostream>
#include <string>
#include <deque>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N , K ;
    cin >> N >> K;
    deque<int> d;
    for (int i = 1; i <= N ; i++)
    {
        d.push_back(i);
    }
    cout << "<";
    int current = 0;
    while (d.empty() == false)
    {
        current = (current + K -1) % d.size();
        if (d.size() == 1)
        {
            cout << d[current] << ">";
        }
        else
        {
            cout << d[current] << ", ";
        }
        d.erase(d.begin()+current);
    }
    return 0;
}