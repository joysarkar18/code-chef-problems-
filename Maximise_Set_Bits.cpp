#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i= 0 ; i< t ; i++){
        int n , k ;
        cin>>n>>k;
        if(n == 1){
            cout << __builtin_popcount(k) << "\n";
        }
        else if(n >= k){
            cout << k << "\n";
        }
        else{
            ll x = k/n;
            if(x*n == k)cout << max(n , x*n) << "\n";
            else{
                ll xx = n-(x*n);
                ll x2 = (_builtin_popcount(x)*(n-1))+_builtin_popcount(x+xx);
                cout << max(n , x2) << "\n";
            }
        }
    } 
    return 0;
}