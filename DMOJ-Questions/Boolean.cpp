#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string i, e;
    int s = 0;
    bool f;
    getline(cin, i);
    e = i.substr(i.find_last_of(" ") + 1);
    for (int z = 0; z < i.size(); z++)
    {
        if (i.at(z) == ' ')
        {
            s++;
        }
    }
    if (e == "True")
    {
        f = true;
    }
    else
    {
        f = false;
    }
    for (int x = 0; x < s; x++)
    {
        f = !f;
    }
    if (f)
    {
        cout << "True"
             << "\n";
    }
    else
    {
        cout << "False "
             << "\n";
    }
}