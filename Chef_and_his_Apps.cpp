#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int s , a , b , c;
        cin>>s>>a>>b>>c;
        if((a+b+c)<=s){
            cout<<0<<endl;
        }
        else{
            int remain = s-(a+b);
            if((c-remain)<=a or (c-remain)<=b){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    } 
    return 0;
}