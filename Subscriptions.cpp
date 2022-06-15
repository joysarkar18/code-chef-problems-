#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int x,y;
        cin>>x>>y;
        if(x%6==0 && x!=0){
            cout<<(y*(x/6))<<endl;
        }
        else{

        cout<<(y*(x/6+1))<<endl;
        }
    }
    return 0;
}