// Distinct Palindrome
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g, n, x;
    cin >> g;
    while (g--)
    {
        cin >> n >> x;
        string x1 = "", x2 = "";
        if (x == 1)
        {
            for (int i = 0; i < n; i += 2)
            {
                x1 += "a";
                if (i + 1 < n)
                    x1 += "a";
            }
            cout << x1 << endl;
        }
        else if (n % 2 == 0 && x > (n / 2))
        {
            cout << "-1" << endl;
        }
        else if (n % 2 == 1 && x > (n / 2) + 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            int k = 0;
            for (int i = 0; i < n; i += 2)
            {
                x1 += ('a' + (k % x));
                if (i + 1 < n)
                {
                    x2 += ('a' + (k % x));
                }
                k++;
            }
            reverse(x2.begin(), x2.end());
            cout << x1 + "" + x2 << endl;
        }
    }
    return 0;
}