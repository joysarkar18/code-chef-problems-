// Code by Joy Sarkar
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while (T--)
    {
        long n;
        cin >> n;
        long A[n];
        long B[n];
        long sumA = 0;
        for (long i = 0; i < n; i++)
        {
            cin >> A[i];
            sumA += A[i];
        }

        long sumB = 0;

        for (long i = 0; i < n; i++)
        {
            cin >> B[i];
            sumB += B[i];
        }

        long ans = 0;

        if (sumA == sumB)
        {

            for (long i = 0; i < n; i++)
            {
                ans += abs(A[i] - B[i]);
            }

            if (ans % 2 == 1)
            {
                cout << -1 << endl;
            }
            else
                cout << ans / 2 << endl;
        }

        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
