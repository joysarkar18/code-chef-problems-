//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      string str;
      cin>>str;
      int count=0;
      for(int i= 1; i< n ; i++){
         if(str[i]>str[i-1]){
            count++;
         }
      } 


      if(str[n-1]=='1' and str[0]=='1'){
        cout<<count<<endl;
      } 

      else  if(str[n-1]=='1' and str[0]=='0'){
        cout<<count-1<<endl;
      } 

      else if(str[n-1]=='0' and str[0]=='1'){
        cout<<count+1<<endl;
      } 

      else{
        cout<<count<<endl;
      }


    }
    return 0;
}