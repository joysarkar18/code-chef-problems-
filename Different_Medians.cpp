// code by Joy Sarkar
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int a[1000];
        int l;
        int r;
        cin >> n;
        a[1] = 0;
        l = 0;
        r = 0;
        for (int i = 2; i <= n; ++i)
        {
            if (i % 2 == 0)
            {

                a[i] = --l;
            }
            else
            {

                a[i] = ++r;
            }
        }

        for (int i = 1; i <= n; ++i)
        {

            cout << a[i] - l + 1 << ' ';
        }
        cout << endl;
    }
    return 0;
}
