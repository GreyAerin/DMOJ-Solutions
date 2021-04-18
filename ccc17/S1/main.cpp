#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    long s1 = 0, s2 = 0;
    scanf("%d", &n);
    int swi[100001], sem[100001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &swi[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sem[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s1 += swi[i];
        s2 += sem[i];
        if (s2 == s1)
        {
            printf("%d", (i + 1));
            return 0;
        }
    }
}
