#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        if(n%a==0){
        cout<<(n/a)*b<<endl;

        }
        else{
             cout<<(n/a+1)*b<<endl;

        }
    } 
    return 0;
}