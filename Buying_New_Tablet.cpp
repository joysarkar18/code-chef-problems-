#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, b;
        cin >> n >> b;
        int arr[n][3];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i][2] <= b)
            {
                ans = max(ans, (arr[i][0] * arr[i][1]));
            }
        }

        if (ans == 0)
        {
            cout << "no tablet" << endl;
        }
        else
        {

            cout << ans << endl;
        }
    }

    return 0;
}