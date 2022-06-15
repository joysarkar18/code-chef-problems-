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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            arr.push_back(v);
        }
        int cmax = -122232232;
        for (int j = 0; j < n; j++)
        {
            rotate(arr.begin(), arr.begin() + 1, arr.end());
          cmax=max(cmax,(arr[0]+arr[n-1]));
        }


        cout << cmax << endl;
    }
    return 0;
}