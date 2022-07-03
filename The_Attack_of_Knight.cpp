#include <bits/stdc++.h>
using namespace std;


void solve()
{
 int x,y;
 int a,b;
 cin>>x>>y>>a>>b;
 if(x==a){
    if(abs(b-y)==2 || abs(b-y)==4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 else if(y==b){
    if(abs(a-x)==2 || abs(a-x)==4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 else{
    if((abs(x-a)==1 && abs(y-b)==3)){
        cout<<"YES"<<endl; 
    }
    else if((abs(x-a)==3 && abs(y-b)==1)){
        cout<<"YES"<<endl; 
    }
    else if((abs(x-a)==3 && abs(y-b)==3)){
        cout<<"YES"<<endl; 
    }
    else if((abs(x-a)==2 && abs(y-b)==4)){
        cout<<"YES"<<endl; 
    }
    else if((abs(x-a)==4 && abs(y-b)==2)){
        cout<<"YES"<<endl; 
    }
    else if((abs(x-a)==1 && abs(y-b)==1)){
        cout<<"YES"<<endl; 
    }
    else{
        cout<<"NO"<<endl;
    }
 }

}
 
 
int main()
{    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
 
}