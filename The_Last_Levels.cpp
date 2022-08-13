// my name is joy sarkar
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x <= 3)
        {
            cout << x * y << endl;
            continue;
        }

        else
        {

            if (x % 3== 0)
            {

                cout << (x * y) + (((x / 3) - 1) * z) << endl;
            }

            else

                cout << (x * y) + (((x / 3)) * z) << endl;
        }
    }
    return 0;
}