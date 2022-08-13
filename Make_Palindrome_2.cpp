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
        string str;
        cin >> str;
        int zero_count = 0;
        int  one_count = 0;
         string ans="";
        for (auto i : str)
        {
            if (i == '0')
                zero_count++;
            else
                one_count++;
        }
       
        if (one_count > zero_count)
        {
            for (int i = 0; i < one_count; i++)
            {
                ans += '1';
            }
        }
        else
        {
            for (int i = 0; i < zero_count; i++)
            {
                ans += '0';
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}