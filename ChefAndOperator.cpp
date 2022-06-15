#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int test1 ,test2 ;
    for(int i =0 ; i< n; i++){
      cin>>test1>>test2;

      if( test1 > test2){
          cout<<">"<<endl;
      }
       else if (test1< test2){
           cout<<"<"<<endl;
       }
       else if ( test1 == test2 ){
           cout<<"="<<endl;
       }
    }
    return 0;
}