// Code by Joy Sarkar
#include <bits/stdc++.h>
using namespace std;
const long N = 200000 + 7;
long arr[N];

int main()
{
    long T;
    cin >> T;
    while (T--)
    {
        long n;
        cin >> n;
        set<long> v;
        for (long i = 0; i < n; i++)
        {
            long temp;
            cin >> temp;
            v.insert(temp);
        }
        bool check = true;
        if (n % 2 == 1)
        {
            if (n - v.size() == 0)
            {
                check = false;
            }
        }

        if (check == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
