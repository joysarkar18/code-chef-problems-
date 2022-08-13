#include <bits/stdc++.h>
using namespace std;

void solve(int n, int a[])
{

    int x = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {

            x ^= i;
        }
    }

    if (x == 0)
        cout<<"cook"<<endl;
    else
        cout<<"chef"<<endl;
}

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
       int a[n];

        for (int i = n - 1; i >= 0; --i)
        {
            cin >> a[i];
        }

        solve(n,a);
    }
}