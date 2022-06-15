#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num , c=0;
    for( int i=0 ; i<n ; i++){
        cin >>num;
       if (num < 10){
           cout<<"Thanks for helping chef!"<<endl;
       }
       else {
           c=-1;
           cout << c<<endl;
       }
    }
    return 0;
}