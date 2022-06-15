#include <iostream>
using namespace std;
int firstdig(int n)
{
    while (n > 0)
    {
        if (n < 10)
        {
            return n;
        }
        n = n / 10;
    }
}

    int lastdig(int n)
    {
      return n%10;
    }

    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n, sum;
            sum = 0;
            cin >> n;
            sum =firstdig(n) + lastdig(n);
            cout<<sum<<endl;

        }

        return 0;
    }