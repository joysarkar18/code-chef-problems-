#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i=0 ; i< t ; i++){
        int n;
        cin>>n;
        string str;
        cin>>str;
        sort(str.begin(), str.end());
        bool check=true;
        for(int i=0 ; i<n ;i+=2){
            if(str[i]!=str[i+1]){
                check=false;
                break;
            }
        }
        if(check==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    } 
    return 0;
}