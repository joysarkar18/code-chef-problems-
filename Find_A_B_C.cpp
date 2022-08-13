// my name is joy sarkar
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define v vector<ll>
#define pb push_back
#define ff first
#define ss second
#define acc(v) accumulate(v.begin(), v.end(), 0LL)
const int N=1e9+7;

int power_of_two(int n)
{
    int hanuman = 0;
    for (int i = n; i >= 1; i--)
    {
        if ((i & (i - 1)) == 0)
        {
            hanuman = i;
            break;
        }
    }
    return hanuman;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];

        for (int i = 0; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector<int> ans(3,0);

        for (int i = power_of_two(n); i > 0; i /= 2)
        {
            int difference = arr[i] - arr[0];
            if (difference < 0)
            {
                difference *= -1;
                int count = difference / i;
                if (count == 1)
                {
                    count = 2;

                    if ((ans[0] ^ i) <= n)
                    {
                        ans[0] ^= i;
                        count--;
                    }

                    if (count && (ans[1] ^ i) <= n)
                    {
                        ans[1] ^= i;
                        count--;
                    }

                    if (count > 0 && (ans[2] ^ i) <= n)
                    {
                        ans[2] ^= i;
                    }
                }

                else if (count == 3)
                {
                    ans[0] ^= i;

                    ans[1] ^= i;
                    ans[2] ^= i;
                }
            }

            else
            {
                int count = difference / i;
                if (count == 1)
                {
                    if ((ans[0] ^ i) <= n)
                    {

                        ans[0] ^= i;
                    }
                    else if ((ans[1] ^ i) <= n)
                    {

                        ans[1] ^= i;
                    }
                    else
                    {

                        ans[2] ^= i;
                    }
                }
            }


            sort(ans.begin() , ans.end());
        }

        printf("%d %d %d\n", ans[0], ans[1], ans[2]);
    }

    return 0;
}