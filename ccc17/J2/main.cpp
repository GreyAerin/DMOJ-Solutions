#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, k, s = 0;
    cin >> n >> k;
    for (int i = 0; i <= k; i++)
    {
        s += n * pow(10, i);
    }
    cout << s;
}