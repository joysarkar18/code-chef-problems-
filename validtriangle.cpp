#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a, b , c;
    for(int i =0 ; i<n ;i++){
       cin>>a>>b>>c;
       if((a+b+c) == 180 ){
           cout<<"YES"<<endl;
       }
      else {
          cout<<"NO"<<endl;
      }
    }
    return 0;
}