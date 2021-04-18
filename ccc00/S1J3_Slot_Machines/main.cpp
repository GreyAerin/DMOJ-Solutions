#include <iostream>

using namespace std;

int main()
{
    int q, m1, m2, m3, c = 0;
    scanf("%d %d %d %d", &q, &m1, &m2, &m3);
    while (q > 0)
    {
        c++;
        q--;
        m1++;
        if (q == 0)
        {
            break;
        }
        if (m1 == 35)
        {
            q += 30;
            m1 = 0;
        }
        c++;
        q--;
        m2++;
        if (q == 0)
        {
            break;
        }
        if (m2 == 100)
        {
            q += 60;
            m2 = 0;
        }
        c++;
        q--;
        m3++;
        if (q == 0)
        {
            break;
        }
        if (m3 == 10)
        {
            q += 9;
            m3 = 0;
        }
    }
    printf("Martha plays %d times before going broke.", c);
    return 0;
}