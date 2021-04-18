#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    scanf("%d", &n);
    char in;
    char *i = NULL;
    char *j = NULL;
    i = new char[n];
    j = new char[n];
    for (int x = 0; x < n; x++)
    {
        cin >> in;
        i[x] = in;
    }
    for (int x = 0; x < n; x++)
    {
        cin >> in;
        j[x] = in;
    }
    for (int x = 0; x < n; x++)
    {
        if (i[x] == j[x])
        {
            c++;
        }
    }
    cout << c;
    delete[] i;
    delete[] j;
    return 0;
}