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
          bool check = false;
        if (n < 7)
        {
            if (n % 2 == 0)
            {
                cout << "YES" << endl;
                continue;
            }

            else
            {
                cout << "NO" << endl;
                continue;
            }
        }

      

        else
        {
            for (int i = 0; i < 1000000; i++)
            {
                if ((n - (7 * i)) % 2 == 0)
                {
                    check = true;
                }
            }
        }

        if(check==true){
            cout<<"YES"<<endl;
        }

        else

        cout << "NO" << endl;
    }
    return 0;
}