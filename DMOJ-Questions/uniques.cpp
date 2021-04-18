#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> N;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        N.insert(x);
    }
    cout << N.size();
}