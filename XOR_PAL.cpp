#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
      for(int i=0; i<n/2 ; i++){
          count+=(s[i]!=s[n-i-1]);
          
      }

      cout<<(count+1)/2<<endl;
    }

 
    return 0;
}