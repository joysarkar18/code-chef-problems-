#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i= 0 ; i< t ; i++){
        int a , b;
        cin>>a>>b;
          int d = 0;
       while(a%3!=0 and b%3!=0){
           if(a<=b){
               b=abs(a-b);
           }
           else{
               a=abs(a-b);
           }
           d++;
       }
       cout<<d<<endl;

    }
    return 0;
}