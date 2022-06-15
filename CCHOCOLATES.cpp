#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0 ; i< t ; i++){
        int x , y , a;
        cin>>x>>y>>a;
        int ans=( (x*5)+(y*10) )/a;
        cout<<ans<<endl;
        
    }
    return 0;
}