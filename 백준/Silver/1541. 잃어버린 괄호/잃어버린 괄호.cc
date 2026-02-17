#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ----------------------------------------
    string input;
    cin >> input;
    
    string num = "";
    vector<int> numArr;
    vector<char> signArr;
    
    for (int i = 0 ; i < input.length(); i++)
    {
        if (input[i] >= '0' && input[i] <= '9')
        {
            num += input[i];
        } else
        {
            numArr.push_back(stoi(num));
            signArr.push_back(input[i]);
            num = "";
        }
    }
    numArr.push_back(stoi(num));
    
    int result = numArr[0];
    bool subtract = false;
    for (int i = 0 ; i < signArr.size(); i++)
    {
        if (signArr[i] == '-')
        {
            subtract = true;
        }
            
        if (subtract)
        {
            result -= numArr[i+1];
        } else
        {
            result += numArr[i+1];
        }
    }
    cout << result;
    // ----------------------------------------
    return 0;
}
