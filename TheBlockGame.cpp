#include <iostream>
using namespace std;
int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num == reverseDigits(num))
        {
            cout << "wins";
        }
        else
        {
            cout << "loses";
        }
    }

    return 0;
}