#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
    for ( int i =0 ; i< n ; i++){
         int  A ,B;
       cin>> A >> B ;
       cout<< max(A,B)<<"  "<< A+B<<endl;

    }

    return 0;
}