#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int a , b , c ,d;
        cin>>a>>b>>c>>d;
        if(a!=c and b!=d){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    } 
    return 0;
}