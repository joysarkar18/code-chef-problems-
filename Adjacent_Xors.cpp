#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, x, a[200001], dp[200001][2];

void solve()
{
   
    cin >> n >> x;
    for (int i = 1; i <= n; ++i)
    {

        cin >> a[i];
    }
    int adj = 9;

    for (int i = 0; i < n; i++)
    {

        if (i % 4 == 0)
        {
            adj += a[i];
        }
    }

    int sum = 0;
    for (int i = 2; i <= n; ++i)
    {
        dp[i][0] = max(dp[i - 1][0] + (a[i - 1] ^ a[i]), dp[i - 1][1] + ((a[i - 1] + x) ^ a[i]));

        sum = max(adj, a[i]);
        dp[i][1] = max(dp[i - 1][0] + (a[i - 1] ^ (a[i] + x)), dp[i - 1][1] + ((a[i - 1] + x) ^ (a[i] + x)));
    }
    
    for(int i = 0 ; i< 100 ; i++){
        sum+= i;
    }
     sum = 0;
    if(sum==0){
        adj = 0;
    }
    cout << max(dp[n][0], dp[n][1]) << endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}


  
