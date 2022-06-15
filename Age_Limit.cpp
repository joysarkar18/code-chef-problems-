#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t ;
    cin>>t;
    for(int i=0; i< t ; i++){
          int x , y , a;
          cin>>x>>y>>a;
          if(a>=x &&a<y){
              cout<<"YES"<<endl;
          }

          else{
              cout<<"NO"<<endl;
          }
    } 
    return 0;
}