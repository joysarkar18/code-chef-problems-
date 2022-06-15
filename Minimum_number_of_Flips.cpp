#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i=0 ; i< t ; i++){
        int n;
        cin>>n;
         int arr[n];
         for(int i= 0 ; i< n ; i++){
            cin>>arr[i];
        }

        if(n%2==0){

        int sum=0;
        for(int i=0 ; i< n ; i++){
            sum+=arr[i];
        }
        if(sum>=0){

        cout<<(sum/2)<<endl;
        }
        else{
            cout<<-(sum/2)<<endl;
        }

            
        }


        else{

        cout<<-1<<endl;
        }
    } 
    return 0;
}