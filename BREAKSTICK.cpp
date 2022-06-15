#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t ;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        int n , m ;
         cin>>n >>m;
         if(m==1){
             cout<<"Yes"<<endl;
         }
         else{

         
        
         if(m%2==0){
             if((n-m)%2==0){
                 cout<<"YES"<<endl;
             }
             else{
                 cout<<"NO"<<endl;
             }
         }
           if(m%2==1){
             if((n-m)%2==1){
                 cout<<"YES"<<endl;
             }
             else{
                 cout<<"NO"<<endl;
             }
         }
         }
    } 
    return 0;
}