#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

int main()
{
    string in;
    int n, t = 0, s = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        getline(cin, in);
        for (char x : in)
        {

            if (tolower(x) == 't')
            {
                t++;
            }
            if (tolower(x) == 's')
            {
                s++;
            }
        }
    }

    if (t > s)
    {
        cout << "English";
    }
    else if (s > t)
    {
        cout << "French";
    }
    else if (t == s)
    {
        cout << "French";
    }

    return 0;
}