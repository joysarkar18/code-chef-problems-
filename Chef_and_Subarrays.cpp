#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int current_sum = 0;
            int current_product = 1;
            for (int j = i; j < n; j++)
            {
                current_sum = current_sum + arr[j];
                current_product = current_product * arr[j];
                if (current_sum == current_product)
                {
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }
    return 0;
}