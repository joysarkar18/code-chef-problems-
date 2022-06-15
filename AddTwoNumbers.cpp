#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = T; T >= 0; T--)
    {
        int a, b;
        cin >> a >> b;
        int ans = a + b;
        cout << ans<<endl;
    }

    return 0;
}