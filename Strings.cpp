#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s1; 
    string s2;
     cin>>s1>>s2;
     cout<<s1.length()<<" "<<s2.length()<<endl;
    cout<<s1+s2<<endl;
    char temp = s1[0];
    s1[0]=s2[0];
    s2[0]=temp;
    cout<<s1<<" "<<s2<<endl;
    return 0;
}