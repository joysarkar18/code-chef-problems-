#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0 ; i <  t  ; i++){
        long long int x,n;
        cin>>x>>n;
        cout<<(long long int)((2*n)-x)*(x-1)<<endl;
    } 
    return 0;
}