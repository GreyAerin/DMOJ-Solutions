#include <iostream>
#include <string>

using namespace std;
int main()
{
    string c, min;
    int t, mint = 200;
    while (c != "Waterloo")
    {
        cin >> c >> t;
        if (t < mint)
        {
            mint = t;
            min = c;
        }
    }
    cout << min;
}