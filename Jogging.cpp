#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        long long n, x;
        cin >> n >> x;

        vector<long long> dp(n + 1, 0);
        dp[1] = x;

        for (long long i = 2; i <= n; i++)
        {
            long long sum = 0;
            for (long long j = 1; j < i; j++)
                sum += dp[j];

            dp[i] = sum % 1000000007;
        }
        long long sum = 0;
        for (int i = 1; i <= n; i++)
            sum = (sum + dp[i]) % 1000000007;

        cout << sum << endl;
    }
    return 0;
}