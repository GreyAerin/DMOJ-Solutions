#include <bits/stdc++.h>

using namespace std;

int main()
{
    float w1, w2, w3, w4, n, p = 0;
    cin >> w1 >> w2 >> w3 >> w4;
    w1 = w1 / 100;
    w2 = w2 / 100;
    w3 = w3 / 100;
    w4 = w4 / 100;
    for (int x = 0; x < 10; x++)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            float m1, m2, m3, m4, m;
            cin >> m1 >> m2 >> m3 >> m4;
            m = (w1 * m1) + (w2 * m2) + (w3 * m3) + (w4 * m4);
            if (m >= 49.9)
            {
                p++;
            }
        }
        cout << p << "\n";
        p = 0;
    }
}
