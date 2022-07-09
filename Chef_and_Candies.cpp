//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n , x;
      cin>>n>>x;
      if(x>=n){
        cout<<0<<endl;
      } 

      else{
        int remain = n-x;
        if(remain%4==0){
            cout<<remain/4<<endl;
        }

        else{
            cout<<remain/4 +1 <<endl;
        }
      } 
    }
    return 0;
}