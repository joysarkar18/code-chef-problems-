// Code by Joy Sarkar
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        int gcd = v[0];

        for (int i = 0; i < n; i++)
        {
            gcd = __gcd(gcd, v[i]);
        }

        cout << gcd * n << endl;
    }
    return 0;
}
