#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int p, n, r;
    scanf("%d %d %d", &p, &n, &r);
    int t = n;
    int i = 0;
    while (t <= p)
    {
        i++;
        t += n * ((pow(r, i)));
        // if (r > 1)
        // {

        // }
        // else
        // {

        //     t += n;
        // }
    }
    printf("%d", i);

    return 0;
}