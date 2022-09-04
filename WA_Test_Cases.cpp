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
        vector<int> s;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            s.push_back(temp);
        }

        string str;
        cin >> str;

        int mn = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                mn = min(mn, s[i]);
            }
        }

        cout << mn << endl;
    }

    return 0;
}
