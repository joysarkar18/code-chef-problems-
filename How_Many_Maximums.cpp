#include <iostream>
using namespace std;

int main() {
 // your code goes here
 int t;cin>>t;
 while(t--){
           int n;
           cin>>n;
           string s;
           cin>>s;
           int c = 0;
           if(n == 2) cout<<"1\n";
           else{
                     for(int i = 1; i < s.size(); i++){
                               if(s[i] == '1' && s[i - 1] == '0') c++;
                     }
                     if(s[0] == '1') c++;
                     if(s[s.size() - 1] == '0') c++;
                     cout<<c<<"\n";
           }
 }
 return 0;
}