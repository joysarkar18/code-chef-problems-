#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, v;
        cin >> n >> k >> v;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        int total = (n + k) * v;
        int remain = total - sum;
        if(remain>0&&remain%k==0){
            cout<<remain/k<<endl;
        }
        else {
            cout<<-1<<endl;
        }
            
        
    }
    return 0;
}