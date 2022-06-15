#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b ,c , d;
    cin>>a>>b>>c>>d;
    int e = max(a,b); 
    int f = max(c,d); 
    cout<<max(e,f)<<endl;
    return 0;
}