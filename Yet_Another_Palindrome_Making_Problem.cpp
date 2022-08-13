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

      string temp1="";
      string temp2="";


      for(int i = 0 ; i<n ; i++){

        if(i%2==0){
            temp1+=str[i];
        }

        else{
            temp2+=str[i];
        }

      } 

      sort(temp1.begin() , temp1.end());
      sort(temp2.begin() , temp2.end());


      if(temp1 == temp2){
        cout<<"YES"<<endl;
      } 

      else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}