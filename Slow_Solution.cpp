// my name is joy sarkar
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;
      
        long long int ans ;


        int a = sumN/maxN;
        int b = sumN%maxN;

        if(maxT>=a+1){

            ans = (a*(maxN*maxN))+(b*b);

        }

        else{
            ans = (maxT*(maxN*maxN));
        }

        cout<<ans<<endl;

        
    }
    return 0;
}