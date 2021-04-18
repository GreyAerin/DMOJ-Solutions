#include <iostream>
#include <string>

int main()
{
    int s, m, l, h;
    scanf("%d %d %d", &s, &m, &l);

    h = s + (2 * m) + (3 * l);

    if (h >= 10)
    {
        printf("%s", "happy");
    }
    else
    {
        printf("%s", "sad");
    }

    return 0;
}