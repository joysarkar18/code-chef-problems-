#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        int reverse=0;
        cin >> num;

        while (num>0)
        {  int rem;
        rem=num%10;
           reverse=reverse*10 + rem;
           num/=10;
        }
        cout<<reverse<<endl;
        
    }
   
   
    return 0;
}