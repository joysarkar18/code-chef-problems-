#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    for (int i = 0; i < n; i++)
    {
      cin>>num;
      cout<< (int)sqrt(num)<<endl;
    }
    

    return 0;
}