#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    while (true)
    {
        string str;
        getline(cin, str);
        
        vector<char> words;
        
        if (str == ".") break;
        
        bool bIsBalance = true;
        
        for (int i = 0 ; i < str.length(); i++)
        {
            if (str[i] == '(')
            {
                words.push_back('(');
            } 
            else if ( str[i] == '[')
            {
                words.push_back('[');
            } 
            else if ( str[i] == ')')
            {
                if (words.empty() || words.back() != '(')
                {
                    bIsBalance = false;
                    break;
                }
                words.pop_back();
            } else if (str[i] == ']')
            {
                if (words.empty() || words.back() != '[')
                {
                    bIsBalance = false;
                    break;
                }
                words.pop_back();
            }
        }
        if (words.empty() && bIsBalance)
        {
            cout << "yes" << "\n";
        } else 
        {
            cout << "no" << "\n";
        }
    }
    // ----------------------------------------
    return 0;
}