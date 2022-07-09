#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n , a , b;
        cin>>n>>a>>b;
        if(n>=(a+(b*2))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    } 
    return 0;
}