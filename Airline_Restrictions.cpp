#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i=0 ; i< t ; i++){
        int arr[3];
       int a,b,c,d,e;
       cin>>a>>b>>c>>d>>e;
       if(((a+b)<=d)&&(c<=e)||((b+c)<=d)&&(a<=e)||((a+c)<=d)&&(b<=e)){
           cout<<"YES"<<endl;

       }
       else{
           cout<<"NO"<<endl;
       }
      

    } 
    return 0;
}