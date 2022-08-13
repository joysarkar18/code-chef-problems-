// my name is joy sarkar
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        while (s.size() > 0)
        {

            if (s.substr(0, s.size() / 2) != s.substr(s.size() / 2, s.size() / 2))
            {
                cout << "NO" << endl;
               continue;
            }

            s = s.substr(0, s.size() / 2);
        }

        cout<<"YES"<<endl;
    }
    return 0;
}