#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a;
    int m;
    for (int i = 0; i < 3; i++)
    {
        cin >> m;
        a.push_back(m);
    }
    sort(a.begin(), a.end());
    cout << a.at(1);

    return 0;
}