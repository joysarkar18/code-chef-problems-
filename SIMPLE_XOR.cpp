#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0 ; i < t ;i++){
        int n , m ;
        cin>>n>>m;
        if(n%2==0){
            cout<<n<<" "<<n+1<<" "<<n+2<<" "<<n+3<<endl;
        }
        else if(n+4>m){
            cout<<-1<<endl;

        }
        else{
            cout<<n+1<<" "<<n+2<<" "<<n+3<<" "<<n+4<<endl;
        }
    } 
    return 0;
}