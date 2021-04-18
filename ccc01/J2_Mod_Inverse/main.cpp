#include <iostream>

using namespace std;

int main()
{
    int m, n, il;
    cin >> n >> m;
    for (int i = 1; i < m; i++)
    {
        if (((n % m) * (i % m)) % m == 1)
        {
            cout << i;
            return 0;
        }
    }
    cout << "No such integer exists.";
}