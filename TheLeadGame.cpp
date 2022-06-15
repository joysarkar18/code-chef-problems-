#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int first_player=0, secound_player=0, c, d = 0;
    for (int i = 0; i < n; i++)
    {  int a ,b;
        cin >> a >> b;
        first_player = first_player + a;
        secound_player = secound_player + b;

        if (first_player > secound_player)
        {
            if ((first_player - secound_player) > d)
            {
                d = first_player - secound_player;
                c = 1;
            }
        }

        else if (secound_player > first_player)
        {
            if ((secound_player - first_player) > d)
            {
                d = secound_player - first_player;
                c = 2;
            }
        }
    }
    cout << c <<endl<< d << endl;

    return 0;
}