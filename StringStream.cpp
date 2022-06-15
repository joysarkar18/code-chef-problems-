#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string str;
    cin>>str;
    int i=0;
    vector<int>v;
    while (i<str.length())
    {
        string s;
        while(str[i]!=','){
       s.push_back(str[i]);
       i++;
        
        }
        int num = stoi(s);
        v.push_back(num);
        i++;
       
    }


   for(int i = 0 ; i<v.size() ; i++){
    cout<<v[i]<<endl;
   }
    
    
    return 0;
}