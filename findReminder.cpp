#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a, b, c, d;
        cin>>a>>b;
        if (a > b)
        {
            d = a % b;
            cout << d<<endl;
        }
        else
        {
            d = b % a;
            cout << d<<endl;
        }
        t--;
    }
    return 0;
}