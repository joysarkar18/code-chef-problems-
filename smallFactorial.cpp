#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;

    for (int i = 0; i < n; i++)
    {
        cpp_int sum = 1;
        cin >> num;

        {
            for (int i = 1; i <= num; i++)
            {
                sum = sum * i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}