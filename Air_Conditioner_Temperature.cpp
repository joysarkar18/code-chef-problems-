// Code by Joy Sarkar
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while (T--)
    {
        int a , b , c;
        cin>>a>>b>>c;
        if(b>=a and b>=c){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
