#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
    string x;
    int t;
    vector<int> times;
    char ll = ' ';
    map<char, int> time;
    time['a'] = 1;
    time['b'] = 2;
    time['c'] = 3;
    time['d'] = 1;
    time['e'] = 2;
    time['f'] = 3;
    time['g'] = 1;
    time['h'] = 2;
    time['i'] = 3;
    time['j'] = 1;
    time['k'] = 2;
    time['l'] = 3;
    time['m'] = 1;
    time['n'] = 2;
    time['o'] = 3;
    time['p'] = 1;
    time['q'] = 2;
    time['r'] = 3;
    time['s'] = 4;
    time['t'] = 1;
    time['u'] = 2;
    time['v'] = 3;
    time['w'] = 1;
    time['x'] = 2;
    time['y'] = 3;
    time['z'] = 4;
    while (cin >> x)
    {
        t = 0;
        if (x == "halt")
        {
            break;
        }
        for (char s : x)
        {
            if (ll == s)
            {
                t += 2;
            }
            ll = s;
            t += time[s];
        }
        times.push_back(t);
    }
    for (int z : times)
    {
        cout << z << endl;
    }
}