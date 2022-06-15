#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[2];
    for(int i=0 ; i<n; i++){
        cin>>arr[0];
        cin>>arr[1];
        cin>>arr[2];

         if(arr[0]>arr[1] && arr[0]<arr[2])
     {
         cout<<arr[0]<<endl;
     }
      else if(arr[0]>arr[2] && arr[0]<arr[1])
     {
         cout<<arr[0]<<endl;
     }
     else if (arr[1]>arr[0]&& arr[1]<arr[2])
     {
        cout<<arr[1]<<endl;
     }
     else if (arr[1]>arr[2]&& arr[1]<arr[0])
     {
      cout<<arr[1]<<endl;
     }
     
     else{
         cout<<arr[2]<<endl;
     }

    }
     
    return 0;
}