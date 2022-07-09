//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      long long int x , y;
      cin>>x>>y;
      long long int z = y^x;
      int v[3];
      if(x%2 && y%2){
        v[1]=2;
        v[2]=y^2;
        v[0]=x^2;  
      }

    else  if(z%2 && y%2){
        v[1]=2;
        v[2]=y^2;
        v[0]=x^2;  
      }
    else  if(x%2 && z%2){
        v[1]=2;
        v[2]=y^2;
        v[0]=x^2;  
      }

      sort(v,v+2);

      cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;

     
    }
    return 0;
}