#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        int p1 , p2 , q1 , q2 ;
        cin>>p1>>p2>>q1>>q2;
        if(max(p1,p2)>max(q1,q2)){
            cout<<"P"<<endl;
        }
        else if(max(p1,p2)==max(q1,q2)){
            cout<<"TIE"<<endl;
        }
        else{
            cout<<"Q"<<endl;
        }
    } 
    return 0;
}