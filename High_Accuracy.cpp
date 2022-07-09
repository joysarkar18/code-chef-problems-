#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int marks;
        cin>>marks;

        if(marks==0 or (marks%3==0)){
            cout<<0<<endl;
        }

        else{
                int v = marks/3;
                v= v+1;
                int ans = (v*3)-marks;
                cout<<ans<<endl;
        }
       
        }
    
    return 0;
}