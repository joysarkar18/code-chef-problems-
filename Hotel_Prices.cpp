#include<bits/stdc++.h>
using namespace std;
int calculate(string s,int a , int b){
    int sum=0;
   if(s=="standard"){
    sum=(a*50)+(b*100);
   }
   else{
    sum=(a*50)+(b*100)+100;
   }

   return sum;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int total=0;
    for(int i=0;i<n;i++){
        string s;
        int a,b;
        cin>>s>>a>>b;
        total+=calculate(s,a,b);

    } 

    cout<<total<<endl;
    return 0;
}