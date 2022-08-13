//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n, m;
      cin>>n>>m;
      int ans = 0;

      if(n==1 and m==1){
        ans = 1;

      }

     else if(n%2==0){
        if(m%2==0){
            ans = 0;
        }

        else{
            ans = n;
        }

      }

      else{

         if(m%2==0){
            ans = m;
        }

        else{
            ans = m+n-1;
        }


      }


      cout<<ans<<endl;

    }
    return 0;
}