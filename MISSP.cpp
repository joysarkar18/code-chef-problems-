#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        stack<int> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        { 
            cin>>arr[i];
            s.push(arr[i]);
        }
       bool ch = false;

    

       for (int i = 0; i < n; i++)
        { 
            if(arr[i]==s.top()){
                s.pop();
            }
        }

       
    }
    return 0;
}
