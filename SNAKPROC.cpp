#include<bits/stdc++.h>
using namespace std;
bool check(string &str){
    deque<char> d;
    int i=0;
    while(str[i]!='\0'){

       if(str[i]=='H'||str[i]=='T'){
           d.push_back(str[i]);
       }
           i++;
    }

    while(!d.empty()){
        if(d.front()=='T'){
            return false;
        }
        else{
            d.pop_front();
            if(d.empty()){
                return false;
            }
            else if(d.front()=='H'){
                return false;
            }
            else{
                d.pop_front();
            }
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
         if(check(str)==true){
             cout<<"Valid"<<endl;
         }
         else{
             cout<<"Invalid"<<endl;
         }
         
         
    } 
    return 0;
}