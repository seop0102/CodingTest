#include <iostream>
#include <string>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    int arr[21] = {0};
    int T;
    cin >> T;
    cin.ignore();
    for (int t = 0; t < T; t++)
    {
        string str;
        getline(cin,str);
        string comm = str.substr(0,3);
        int num = 0;
        if (comm == "add")
        {
            num = stoi(str.substr(4));
            if (arr[num] == 0)
            {
                arr[num] = 1;
            }
        } else if ( comm == "rem")
        {
            num = stoi(str.substr(7));
            if (arr[num] == 1)
            {
                arr[num] = 0;
            }
            
        } else if ( comm == "che")
        {
            num = stoi(str.substr(6));
            if (arr[num] == 1)
            {
                cout << "1\n";
            } else
            {
                cout << "0\n";
            }
            
        } else if ( comm == "tog")
        {
            num = stoi(str.substr(7));
            if (arr[num] == 1)
            {
                arr[num] = 0;
            } else
            {
                arr[num] = 1;
            }
        } else if ( comm == "all")
        {
            for (int i  = 1 ; i <= 20 ; i++)
            {
                arr[i] = 1;
            }
        } else if ( comm == "emp")
        {
            for (int i  = 1 ; i <= 20 ; i++)
            {
                arr[i] = 0;
            }
        }
    }
    // ----------------------------------------
    return 0;
}
