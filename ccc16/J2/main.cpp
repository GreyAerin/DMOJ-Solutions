#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, s;
    int x[4][4];
    int rsum[4], csum[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        s = a + b + c + d;
        x[i][0] = a;
        x[i][1] = b;
        x[i][2] = c;
        x[i][3] = d;
        rsum[i] = s;
    }
    for (int i = 0; i < 4; i++)
    {
        if (i > 0)
        {
            if (rsum[i - 1] != rsum[i])
            {
                cout << "not magic" << endl;
                return 0;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        s = 0;
        for (int j = 0; j < 4; j++)
        {
            s += x[i][j];
        }
        csum[i] = s;
    }
    for (int i = 0; i < 4; i++)
    {
        if (i > 0)
        {
            if (csum[i - 1] != csum[i])
            {
                cout << "not magic" << endl;
                return 0;
            }
        }
    }
    cout << "magic\n";
    return 0;
}