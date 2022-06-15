#include <bits/stdc++.h>
using namespace std;
void less9(int n)
{
    switch (n)
    {
    case 1:
    {
        cout << "one" << endl;
        break;
    }
    case 2:
    {
        cout << "two" << endl;
        break;
    }
    case 3:
    {
        cout << "three" << endl;
        break;
    }
    case 4:
    {
        cout << "four" << endl;
        break;
    }
    case 5:
    {
        cout << "five" << endl;
        break;
    }
    case 6:
    {
        cout << "six" << endl;
        break;
    }
    case 7:
    {
        cout << "seven" << endl;
        break;
    }
    case 8:
    {
        cout << "eight" << endl;
        break;
    }
    case 9:
    {
        cout << "nine" << endl;
        break;
    }

    }
}

void even_odd(int n){
    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }

}
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            less9(i);
        }
        else
        {
            even_odd(i);
        }
    }
    return 0;
}