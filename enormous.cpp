#include <iostream>
using namespace std;
int main()
{
    int n , k;
     int count =0;
    cin>>n>>k;
    for(int i =0 ; i<n ; i++)
    {
        int t1;
         cin>>t1;
        
        if (t1%k==0)
        {
           count ++;
        }
        
     
    }

cout<<count;
    return 0;
}