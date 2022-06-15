#include<bits/stdc++.h>
using namespace std;
void rotate(string & str){
    for(int i = 0 ; i< str.length() ; i+=2){
        if(i+1>=str.length()){
            break;
        }
        char temp = str[i];
        str[i]=str[i+1];
        str[i+1]=temp;
    }
    return;
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        int n;
        cin>>n;
       string str;
       cin>>str;
       rotate(str);
       for(int i = 0 ; i < n ; i++){
           str[i]='z'+'a'-str[i];
       }
       cout<<str<<endl;


    } 
    return 0;
}