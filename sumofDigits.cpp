#include <iostream>
using namespace std;
void sumof(int n)
{
    int sum = 0;

    while (n > 0)

    {
        int temp = (n % 10);
        sum = sum + temp;
        n = n / 10;
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        sumof(n);
    }
    return 0;
}