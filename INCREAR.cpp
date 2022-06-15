#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0 ; i< t ; i++) {
        int x, y;
        cin>>x>>y;
        int count = 0;
        
      if(x>y){
          int temp = x-y;
          
        
      }

      else if(x==y){
          cout<<0<<endl;
      }
      else{
           while((y-x)>=2){
              x+=2;
              count++;
          }
          if(x==y){
              cout<<count<<endl;
          }
          else{
              cout<<count+1<<endl;
          }
      }
      
    }
    return 0;
}