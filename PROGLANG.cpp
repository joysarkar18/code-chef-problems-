#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for (int  i = 0; i < t; i++)
    {
        /* code */
            int arr[6];
    for(int i =0 ; i< 6 ; i++){
        cin>>arr[i];

    } 

    
    if(arr[0]*arr[1]==arr[2]*arr[3]){
        cout<<1<<endl;
    }
    else if(arr[0]*arr[1]==arr[4]*arr[5]){
        cout<<2<<endl;
    }
    else{
        cout<<0<<endl;
    }


    }
    

    
    return 0;
}