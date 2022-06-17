#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0 ; i< n ; i+=2){
            if(str[i]=='0' &&str[i+1]=='0'){
                cout<<'A';
            }
            else if(str[i]=='0' &&str[i+1]=='1'){
                cout<<'T';
            }
            else if(str[i]=='1' &&str[i+1]=='0'){
                cout<<'C';
            }
            else if(str[i]=='1' &&str[i+1]=='1'){
                cout<<'G';
            }



        }

        cout<<endl;
    } 
    return 0;
}