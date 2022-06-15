#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n], maxx[n], minn[n];
        cin >> arr[0];
        maxx[0] = arr[0];
        minn[0] = arr[0];
        int maxtop = 0;
        int mintop = 0;
        bool check = true;
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] <= minn[mintop])
            {
                mintop++;
                minn[mintop] = arr[i];
            }

            else
            {
                mintop++;
                minn[mintop] = minn[mintop - 1];
            }

            if (arr[i] >= maxx[maxtop])
            {
                maxtop++;
                maxx[maxtop] = arr[i];
            }

            else
            {
                maxtop++;
                maxx[maxtop] = maxx[maxtop - 1];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == minn[i] || arr[i] == maxx[i])
            {
                continue;
            }

            else
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