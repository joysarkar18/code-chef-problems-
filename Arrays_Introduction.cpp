#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0 ; i< n ; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    reverse(v.begin(), v.end());
    for(int i=0 ; i< n ; i++){
         cout<<v[i]<<" ";
    }

    return 0;
}