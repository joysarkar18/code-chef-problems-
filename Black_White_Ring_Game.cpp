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
        vector<int> arr;
        int s0 = 0;
        int s1 = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            if (temp == 1)
            {
                s1++;
            }

            if (temp == 0)
            {
                s0++;
            }
            arr.push_back(temp);
        }

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (arr[0] == arr[n - 1])
                {
                    sum++;
                }
            }

            else
            {
                if (arr[i] == arr[i - 1])
                {
                    sum++;
                }
            }
        }

        sum = sum - abs(s0 - s1);

        if (sum % 4 == 0)
        {
            cout << "Bob" << endl;
        }

        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}
