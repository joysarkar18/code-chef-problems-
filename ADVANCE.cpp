#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i= 0 ; i< t ; i++){
        int n , m;
        cin>>n>>m;
        if(m>=n && m<=(n+200)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    } 
    return 0;
}