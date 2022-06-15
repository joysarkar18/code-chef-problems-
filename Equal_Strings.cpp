#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        int n;
        cin>>n;
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        set<char> v;
        for(int i=0 ; i< n ; i++){
            if(s2[i]!=s1[i]){
                v.insert(s2[i]);
            }
        }
        int count=0;
      for(auto itr : v){
         count++;
      }
      cout<<count<<endl;
    } 
    return 0;
}