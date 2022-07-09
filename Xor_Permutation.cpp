#include <bits/stdc++.h>
using namespace std;
//joy sarkar
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    for(int joy =0 ; joy< t ; joy++)
    {

        int n;
        cin >> n;
        if (n == 3)
        {
            cout << -1 << endl;
        }
        else if(n <= 10)
        {
            for (int i = n; i > 4; i--)
            {
                cout << i << " ";
            }
            cout << "1 2 4 3 ";
        }
        else
        {
            for (int i = 10; i > 4; i--)
            {
                cout << i << " ";
            }
            cout << "1 2 4 3 ";
            for (int i = 11; i <= n; i++)
            {
                cout << i << " ";
            }
        }


    }



    return 0;
}