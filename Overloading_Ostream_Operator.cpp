#include<bits/stdc++.h>
using namespace std;
class people
{
private:
    string first_name;
    string last_name;
    string w;
public:
   people(string s1 , string s2 , string s3){
    first_name=s1;
    last_name=s2;
    w=s3;
    }

    frind ostream &operator << (ostream &output , &people p){
        cout<<"first_name="<<p.first_name<<","<<"last_name="<<p.last_name<<" "<<w<<endl;
    }

   
};



int main(int argc, char const *argv[])
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    people person(s1,s2,s3);
    cout<<person;
     
    return 0;
}