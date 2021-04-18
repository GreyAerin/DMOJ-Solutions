#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int shift, i, totalShift;
    cin >> shift;
    i = 1;
    string in;
    cin >> in;
    for (char c : in)
    {
        totalShift = (3 * i) + shift;
        if (c - totalShift <= 65)
        {
            c = (90 - totalShift + (c - 64));
            cout << c;
        }
        else
        {
            c = c - totalShift;
            cout << c;
        }
        i++;
    }
    cout << "\n";
    return 0;
}