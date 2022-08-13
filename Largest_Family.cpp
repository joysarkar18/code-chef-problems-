#include <bits/stdc++.h>
using namespace std;

void solve();

vector<int> sorted(vector<int> &v){
    sort(v.begin() , v.end());
    return v;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> people;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 0){

            count++;
        }
        else{
            people.push_back(temp);

        }
    }

   sorted(people);

    for (int i = 0; i < count; i++){

        people.push_back(0);
    }

    int ans = 0;
    int p = 1;
    stack<int> st;

    int limit = people.size();
    for(int i= 0 ; i<limit ; i++){
        st.push(i);

    }
    for (int i = 0; i < n; i++)
    {
        int fn = 1;
        for (int j = 0; j< people[i]; j++)
        {
            if (p < n)
                p++;
            else
            {
                fn = 0;
                break;
            }
        }

        ans += fn;
    }
    
    cout << ans << endl;
}