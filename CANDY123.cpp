#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0 ; i<t ; i++){
        int l , b;
        cin>>l>>b;
        if(l==1){
            if(b==1){
                cout<<"Limak"<<endl;
            
            }
            else {
                cout<<"Bob"<<endl;
            }

            return 0;
        }

        int lttl , bttl;
        int lcnt=1 , bcnt=2;
        while(1){
            int temp = lcnt;
            lcnt=bcnt+1;
            lttl=temp+lcnt;
            if(lttl>l){
                cout<<"Bob"<<endl;
                break;
            }
            int temp1 = bcnt;
            bcnt=lcnt+1;
            bttl=temp1+bcnt;
            if(bttl>b){
                cout<<"Limak"<<endl;
                break;
            }

        }
    } 
    return 0;
}