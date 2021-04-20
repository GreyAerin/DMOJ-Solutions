#include <iostream>
#include <string>

using namespace std;

int main()
{
    int s;

    cin >> s;
    for (int i = 0; i < s; i++)
    {
        if (i == 0 || i + 2 == s)
        {
            cout << "*";
            for (int i = 0; i < (s * 2) - 2; i++)
            {
                cout << " ";
            }
            cout << "*\n";
        }
    }

    return 0;
}