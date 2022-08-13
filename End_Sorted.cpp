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
        int arr[n];
       
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
           
        }

         int start = 0, end = 0;


        for (int i = 0; i < n; i++)
        {

           if (arr[i] == 1){

                start += i;
           }
            if (arr[i] == n){

                end += i;
            }
           
        }


        int spt= start - 1;
        int ept = n - end;

        if (end < start)
        {
            cout << spt + ept- 1 << endl;
        }

        else{

            cout << spt+ ept<< endl;
        }
    }
    return 0;
}