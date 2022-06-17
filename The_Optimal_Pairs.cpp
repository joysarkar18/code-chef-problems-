#include<bits/stdc++.h>
using namespace std;
// Recursive function to return gcd of a and b

int main(int argc, char const *argv[])
{
    int t ;
    cin>>t;
        while (t-- > 0) {
            long n ;
            cin>>n;
            long count=1;
            for (int i=2; i <= sqrt(n); i++)
            {
                if (n%i==0)
                {

                    // If divisors are equal, print only one
                    if (n/i == i)
                        count++;

                    else
                        count+=2;
                }
            }
            long ans =  count*2;
            if(n%2==0) ans--;
        cout<<ans<<endl;

        }
    return 0;
}