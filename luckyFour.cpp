#include <iostream>
using namespace std;
int fourFind(int n)
{
    int sum = 0;
   
    while (n > 0)
    {
        if (n % 10 == 4)
        {
            sum = sum + 1;
        }
        n = n / 10;
       
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        cout << fourFind(n) << endl;
        t--;
    }
    return 0;
}