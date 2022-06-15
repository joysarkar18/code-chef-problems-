#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n , q;
    cin>>n>>q;
    
    vector<vector<int>> myv;
    for(int i=0 ; i< n ; i++){
        int m;
        cin>>m;
        vector<int> v;
        for(int j = 0 ; j <m ; j++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }

        myv.push_back(v);
    }

    for(int i=0 ; i< q ; i++){
        int c,d;
        cin>>c>>d;
        cout<<myv[c][d]<<endl;
    }
  
    return 0;
}