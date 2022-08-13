//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int amount;
      cin>>amount;

      cout<<amount-(amount-(amount%10))<<endl;  
    }
    return 0;
}