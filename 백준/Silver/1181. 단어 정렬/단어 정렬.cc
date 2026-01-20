#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int N;
    cin>>N;
    vector<string> v(N);
    for (int i=0;i<N;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(), [](string s1, string s2)
    {
        if (s1.length() != s2.length())
        {
            return s1.length() < s2.length();
        }
        return s1<s2;
    });
    v.erase(unique(v.begin(),v.end()),v.end());
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\n";
    }
    // ----------------------------------------
    return 0;
}