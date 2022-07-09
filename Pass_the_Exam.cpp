//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int a , b , c;
      cin>>a>>b>>c;
      int total = a+b+c;
      int minN = min(a, min(b,c));

      if(minN<10 or total < 100)  {
        cout<<"FAIL"<<endl;
      }

      else{
        cout<<"PASS"<<endl;
      }
    }
    return 0;
}