#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cards;
    int p = 0, c, d, h, s;
    cin >> cards;
    c = cards.find_first_of('D') - 1;
    d = cards.find_first_of('H') - c - 2;
    h = cards.find_first_of('S') - d - c - 3;
    s = cards.substr(cards.find_first_of('S') + 1).length();
    for (int i = 0; i < c; i++)
    {
        char x = cards.at(i);
        if (x == 'J')
        {
            p++;
        }
        else if (x == 'Q')
        {
            p += 2;
        }
        else if (x == 'K')
        {
            p += 3;
        }
        else if (x == 'A')
        {
            p += 4;
        }
        if (c == 0)
        {
            p += 3;
        }
        else if (c == 1)
        {
            p += 2;
        }
        else if (c == 2)
        {
            p += 1;
        }
    }
    cout << p;
    return 0;
}
