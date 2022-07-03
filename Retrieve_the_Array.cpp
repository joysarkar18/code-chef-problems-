#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int> arr;
       for(int i= 0 ; i< n ; i++){
                 long long int temp;
                 cin>>temp;
                 arr.push_back(temp);
       }
   long long int  sum=0;
   for(int i = 0 ; i< n ; i++){
    sum+=arr[i];
   }

   long long int d = (sum/(n+1));

   for(int i= 0 ; i< n ; i++){
    cout<<arr[i]-d<<" ";
   }
   cout<<endl;

  

    } 
    return 0;
}