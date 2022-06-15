
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
  long long T,X,Y,count = 0,c=0;
  cin>>T;
  while(T--){
    cin>>X>>Y;
    if(X==Y)
      cout<<X<<endl;
    else if(X == 0 || Y == 0)
      cout<<-1<<endl;
    else{
      if(X>Y)
        swap(X,Y);
      while(X<= Y){
        c++;
        X *= 2; 
      }
      X /= 2;
      c--;
      //cout<<"c="<<c<<endl;
      if(Y == X){  
        cout<<Y+c<<endl;
      }
      else
        cout<<Y+c+1<<endl;
    }
     c=0;
  }
  return 0;
}