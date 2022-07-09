#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int n, m, k;

    cin >> n >> m >> k;
    int joy[101];
       int val;
    for (int i = 0; i < 101; i++)
        joy[i] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        joy[val]++;
    }
    int i;


    long before = 0;


    for (i = 0; i < k; i++)
    {
        if (joy[i] == 0)
        {
            return false;
        }
        before++;
    }
    long after = n - before - joy[k];
    if (m >= k && m <= (n - joy[k])){

        return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}