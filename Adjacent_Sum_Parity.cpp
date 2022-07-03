#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        deque<int> st;
        st.push_back(3);
        for (int i = 0; i < n-1 ; i++)
        {
            if (arr[i] == 0 and st.back() % 2 == 1)
            {
                st.push_back(3);
            }
            else if (arr[i] == 0 and st.back()%2 == 0)
            {
                st.push_back(2);
            }

            else if (arr[i] == 1 and st.back() % 2 == 1)
            {
                st.push_back(2);
            }
            else if (arr[i] == 1 and st.back()%2 == 0)
            {
                st.push_back(3);
            }
        }

    

        if((st.front()+st.back())%2==arr[n-1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}