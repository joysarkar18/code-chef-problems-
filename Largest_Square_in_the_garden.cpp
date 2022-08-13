#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin >> n;
    
 vector<vector<int>> arr(n , vector<int>(n,0));
   
    for (int i = 0; i < n; i++)
    {
        int j, k;
        cin >> j >> k;

        for (int m = j; m <= k; m++)
        {
            arr[i][m] = 1;
        }
    }

     int ans = 0;
   vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i - 1][j - 1] == 1)
            {

                dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));

                ans = max(ans, dp[i][j]);
            }
        }
    }


    cout <<ans << endl;

    return 0;
}