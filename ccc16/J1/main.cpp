#include <iostream>

using namespace std;

int main()
{
    char n;
    int w = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> n;
        if (n == 'W')
        {
            w++;
        }
    }
    if (w > 0 && w < 3)
    {
        cout << 3;
    }
    else if (w > 2 && w < 5)
    {
        cout << 2;
    }
    else if (w > 4 && w < 7)
    {
        cout << 1;
    }
    else if (w == 0)
    {
        cout << -1;
    }
    return 0;
}