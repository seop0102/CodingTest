#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<string> s;
    s.insert("ChongChong");
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string A, B;
        cin >> A >> B;
        if (s.find(A) != s.end())
        {
            s.insert(B);
        } else if ( s.find(B) != s.end())
        {
            s.insert(A);
        }
    }
    cout << s.size();
    return 0;
}
