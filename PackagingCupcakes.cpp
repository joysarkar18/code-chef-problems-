#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cake;
    int ans;
    while ( n--){
        cin >>cake;
        ans = cake / 2 +1 ;
        cout <<ans<<endl;
    }
    return 0;
}