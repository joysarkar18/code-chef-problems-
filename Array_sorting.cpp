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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans =0 ; 

        for(int i = 0 ; i< n ; i++){
             ans =__gcd(ans, abs(arr[i] -(i+1)));

        }

        cout << ans <<endl;
        
    }
    
    return 0;
}