#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i=0 ; i< t ; i++){
        int a , b;
        cin>>a>>b;
        if((a+b)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    } 
    return 0;
}