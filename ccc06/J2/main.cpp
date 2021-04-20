#include <iostream>
#include <string>

using namespace std;

int main()
{
    int d1, d2, c = 0;
    cin >> d1 >> d2;

    for (int i = 1; i <= d1; i++)
    {
        for (int j = 1; j <= d2; j++)
        {
            if (i + j == 10)
            {

                c++;
            }
        }
    }
    if (c == 1)
    {
        cout << "There is 1 way to get the sum 10.";
    }
    else
    {
        cout << "There are " << c << " ways to get the sum 10.";
    }
}