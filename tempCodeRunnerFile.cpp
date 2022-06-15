#include<bits/stdc++.h>
using namespace std;
bool check(string &str , int& n){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='H'){
            i++;
            while(str[i]!='H'&&str[i]!='T'){
                i++;
                if(i==n){
                      return false;
                }
                
            }
            if(str[i]=='H'){
                return false;
            }
            else if(str[i]=='T'){
                i++;
            }
        }

        if(str[i]=='T'){
            return false;
        }


    }
    return true;

}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i= 0; i <  t  ; i++){
        int n ;
         cin>> n;
         string str;
         cin>>str;
         if(check(str , n)){
             cout<<"Valid"<<endl;
         }

        if(check(str, n )== false){
            cout<<"Invalid"<<endl;
        }
    } 
    return 0;
}