#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<int, int> b;
    map<int, int> d;
    map<int, int> s;
    map<int, int> de;
    b[1] = 461;
    b[2] = 431;
    b[3] = 420;
    b[4] = 0;
    d[1] = 130;
    d[2] = 160;
    d[3] = 118;
    d[4] = 0;
    s[1] = 100;
    s[2] = 57;
    s[3] = 70;
    s[4] = 0;
    de[1] = 167;
    de[2] = 266;
    de[3] = 75;
    de[4] = 0;
    int bi, di, si, dei, t;
    cin >> bi >> si >> di >> dei;
    t = b[bi] + d[di] + s[si] + de[dei];

    cout << "Your total Calorie count is " << t << ".";
}
