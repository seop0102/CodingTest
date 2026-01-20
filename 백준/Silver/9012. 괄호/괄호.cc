#include <iostream>
#include <vector>

using namespace std;

bool bIsVPS(string str)
{
    // 1. str[0] == ')' -> false
    //              '(' -> arr 벡터에 push_back
    // 2. for 문 ( 1부터 str.length()까지 돌림)
    // 3. '(' -> arr 벡터에 push_back
    //    ')' -> 빈 문자열이면 false 반환, 아니면 pop_back();
    // 4. 마지막까지 돌았는데 빈 문자열이면 true 반환, 아니면 false 반환
    vector<char> v;
    if (str[0] == ')') return false;
    if (str[0] == '(') v.push_back('(');
    for (int i = 1 ; i < str.length() ; i++)
    {
        if (str[i] == '(') v.push_back('(');
        else
        {
            if ( v.empty() ) return false;
            if ( !v.empty() ) v.pop_back();
        }
    }
    if (v.empty()) return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        string s;
        cin >> s;
        if (bIsVPS(s))
        {
            cout << "YES" << "\n";
        } else
        {
            cout << "NO" << "\n";
        }
    }
    // ----------------------------------------
    return 0;
}