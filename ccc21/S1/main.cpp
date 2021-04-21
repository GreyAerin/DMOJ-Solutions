#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<double> hArr;
    queue<double> wArr;
    int n;
    double r;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> r;
        hArr.push(r);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> r;
        wArr.push(r);
    }
    double h1, h2, w, e = 0;
    while (hArr.size() > 0)
    {
        h1 = hArr.front();
        hArr.pop();
        h2 = hArr.front();
        w = wArr.front();
        wArr.pop();
        double b = w * min(h1, h2);
        double tl = max(h1, h2) - min(h1, h2);
        double t = tl * w / 2;
        e += b + t;
        
    }
    cout << e << endl;
    //printf("%f", e);
    return 0;
}
