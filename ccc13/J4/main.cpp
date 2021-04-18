#include <iostream>

using namespace std;

int main()
{
    int t, c, ct;
    int *cTime = NULL;
    scanf("%d %d", &t, &c);
    cTime = new int[c];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &t);
        cTime[i] = t;
    }
}