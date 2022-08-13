//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;
void solve();

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int count = 0;
    int ans = -999999;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
        {
            ans = max(ans, count);
            count = 0;
        }
        else
        {
            count++;
        }
    }
    ans = max(count, ans);
    if (ans >= 4)
    {
        cout << "NO" << endl;
        return;
    }

    else
    {
        cout << "YES" << endl;
        return;
    }
}

