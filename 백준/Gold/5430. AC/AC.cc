#include <deque>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int T;
    cin >> T;
    for (int t = 0 ; t < T ; t++)
    {
        string s, arr;
        int num;
        cin >> s >> num >> arr;
        deque<int> d;
        string temp = "";
        
        if ( num != 0 )
        {
            for (int i = 0 ; i < arr.length() ; i++)
            {
                if ( '0' <= arr[i] && arr[i] <= '9' )
                {
                    temp += arr[i];
                } else if (arr[i] == ',' || arr[i] == ']')
                {
                    d.push_back(stoi(temp));
                    temp = "";
                } else if (arr[i] == '[')
                {
                    continue;
                }
            }   
        }
        bool bIsFront = true;
        int frontNum = 0;
        int backNum = 0;
        for (int i = 0 ; i < s.length(); i++)
        {
            if (s[i] == 'R')
            {
                bIsFront = !bIsFront;
            } else
            {
                if (bIsFront)
                {
                    frontNum ++;
                } else
                {
                    backNum++;
                }
            }
        }      
        if (frontNum + backNum > num)
        {
            cout<<"error\n";
            continue;
        }
        for (int i = 0 ; i < frontNum ; i++)
        {
            d.pop_front();
        }
        for (int i = 0 ; i < backNum ; i++)
        {
            d.pop_back();
        }
        cout << "[";
        if (d.size() != 0)
        {
            if (bIsFront)
            {
                for (int j = 0 ; j < d.size()-1; j++)
                {
                    cout << d[j] << ",";
                }
                cout<< d[d.size()-1];
            } else
            {
                for (int j =d.size()-1 ; j>0; j--)
                {
                    cout <<d[j] << ',';
                }
                cout << d[0];
            }
        }
        cout << "]\n";
    }
    // ----------------------------------------
    return 0;
}
