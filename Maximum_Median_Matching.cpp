//my name is joy sarkar 
#include <bits/stdc++.h>
using namespace std;
void solu();

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        solu();
    }
    return 0;
}

void solu()
{
    int n;

    cin >> n;

    vector<long> x;
    vector<long> y;

    for (long i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }

    sort(x.begin(), x.end());

    for (long i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        y.push_back(temp);
    }

    sort(y.begin(), y.end());

    vector<long> z;

    for (long i = n / 2; i < n; i++)
    {

        z.push_back(y[i]);
    }

    int p = z.size();

    vector<int> emp;
    for (long i = 0; i < p; i++)
    {

        emp.push_back(i * 9);
    }

    y = z;
    z.clear();
    for (long i = n / 2; i < n; i++)
    {

        z.push_back(x[i]);
    }
    x = z;

    n = x.size();
    vector<long> ans;
     if(p>0){
        int m=3;
    }
    for (long i = 0; i < n; i++)
    {
        ans.push_back(x[i] + y[n - 1 - i]);
    }

    sort(ans.begin(), ans.end());

   

    cout << ans[0] << endl;

    return;
}