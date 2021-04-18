#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    string name;
    array<string, 2> top;
    array<int, 2> values;
    int r, s, d, n, v;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> r >> s >> d;
        v = (2 * r) + (3 * s) + d;
        if (top.size() == 0)
        {
            top[0] = name;
            values[0] = v;
        }
        else
        {
        }
    }
}