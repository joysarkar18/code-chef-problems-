// my name is joy sarkar
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int mx = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
            mx = max(mx, arr[i]);
        }

        int sad = 0;
        int happy = 0;

        int mxcnt = 0;

        for (auto it : m)
        {
            if (it.second == 1)
            {
                sad++;
            }

            if (it.second >= 2)
            {
                happy++;
            }

            mxcnt = max(mxcnt, it.second);
        }


          int ans ;

        if (sad == 0)
        {

            cout << 0 << endl;
            continue;
        }

      

        else
        {
            if (sad % 2)
            {
                 ans = (sad + 1) / 2;
                if (m[mx] == 1)
                {

                    if (mxcnt == 2)
                        ans++;
                }

                cout << ans << endl;
                continue;
            }
            else
            {
                 ans = sad / 2;
                cout << ans << endl;

                continue;
            }
        }
    }
    return 0;
}