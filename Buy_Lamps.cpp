//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n , k , x , y;
      cin>>n>>k>>x>>y;

      if(y<x){

      cout<<(k*x)+((n-k)*y)<<endl;  
      }

      else{
        cout<<(n*x)<<endl;
      }
    }
    return 0;
}