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
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        multiset<int> st;

        sort(v.begin() , v.end());

        for (int i = 0; i < n; i++)
        {
            st.insert(v[i]);
        }
        
        

        int ans  = 1;
        int  smallest = 1;
        while (st.size() > 0)
        {
            auto i = st.lower_bound(smallest);
            if (i != st.end())
            {

                smallest++;
                st.erase(i);
            }
            else
            {
                smallest = 1;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}