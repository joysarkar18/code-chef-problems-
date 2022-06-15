#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for (int i=0 ; i< t ; i++){
      int n;
        cin>>n;
        int arr[n];
        arr[n-1]=n;
        int k=n;
        for(int i = 1 ; i < n ; i++){
            if(i%2!=0){
                arr[n-1-i]=k-(n-i);
                k=arr[n-1-i];
            }
            else if(i%2==0){
               arr[n-1-i]=k+(n-i);
                k=arr[n-1-i];  
            }

        }

        for(int i = 0 ; i< n ;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
       
    
    return 0;
}