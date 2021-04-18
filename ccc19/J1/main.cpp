#include <iostream>

using namespace std;

int main()
{
    int x[6], A, B;
    for (int i = 0; i < 6; i++)
    {
        cin >> x[i];
    }
    A = (3 * x[0]) + (2 * x[1]) + (x[2]);
    B = (3 * x[3]) + (2 * x[4]) + (x[5]);
    if (A > B)
    {
        cout << "A";
    }
    else if (A < B)
    {
        cout << "B";
    }
    else if (A == B)
    {
        cout << "T";
    }
    return 0;
}
