#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int x = (b*f - c*e) / (b*d -a*e);
    int y = (a*f - c*d) / (a*e - b*d);
    cout << x << " "<<y;
    return 0;
}