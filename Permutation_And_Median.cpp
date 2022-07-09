//my name is joy sarkar 
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
        int x = n;
        int m = 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0){

                cout << x-- << " ";
            }
            else{

                cout << m++ << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
