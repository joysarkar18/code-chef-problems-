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

        string ans;

        int chec = 0;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
            {
                chec = 1;
                ans = "CHEF";
            
               continue;
                
            }
            v.push_back(temp);
        }

        string ans2;

        vector<int> exm;
        for (int i = 0; i < n; i++)
        {
            exm.push_back(2);
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i] - exm[i];
        }

        if(sum%2==0){
            ans2="CHEFINA";
        }

        else{
            ans2="CHEF";
        }


        if(chec==1){
            cout<<ans<<endl;
        }

        else{
            cout<<ans2<<endl;
        }

    }
    return 0;
}