#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0 ; i<t ; i++){
        int l , b;
        cin>>l>>b;
        int tl=0;
        int tb=0;
        int counter = 0;
        while(tl<=l && tb<=b){
            counter++;
            tl=tl+counter;
            counter++;
            tb=tb+counter;
        }
        if(tl>l && tb>b){
            cout<<"Bob"<<endl;
        }
        else if(tl>l){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Limak"<<endl;
        }

        
    } 
    return 0;
}