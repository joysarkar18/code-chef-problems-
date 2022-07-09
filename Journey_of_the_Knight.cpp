//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;
int no_step(int x1 , int y1 , int x2 , int y2){

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int x1 , y1 , x2 , y2;
      cin>>x1>>y1>>x2>>y2;

      int p = abs(x1-x2)+ abs(y1+y2);

      if(p%2==0){
        cout<<"YES"<<endl;
      }

      else{
        cout<<"NO"<<endl;
      }  
    }
    return 0;
}