#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0 ; i< t ; i++){
        int n , k;
        cin>>n>>k;
        
         if(n%5!=0 && k%5!=0){
            cout<<(n/5)-(k/5)<<endl;
        }

        else if(n%5==0&&k%5!=0){
            cout<<(n/5)-(k/5)-1<<endl;
        }

        else if(n%5==0&&k%5==0){
             cout<<(n/5)-(k/5)<<endl;
        }
        else if(n%5!=0 && k%5==0){
            cout<<(n/5)-(k/5)+1<<endl;
        }
        
        
    } 
    return 0;
}