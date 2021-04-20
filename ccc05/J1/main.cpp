#include <iostream>
#include <string>

using namespace std;

int main()
{
    int d, e, w;
    float cA, cB;
    cin >> d >> e >> w;
    if (d >= 100)
    {
        cA = 0.25 * (d - 100) + 0.15 * e + 0.2 * w;
    }
    else
    {
        cA = 0.15 * e + 0.2 * w;
    }
    if (d >= 250)
    {
        cB = 0.45 * (d - 250) + 0.35 * e + 0.25 * w;
    }
    else
    {
        cB = 0.35 * e + 0.25 * w;
    }

    printf("%s %.2f\n", "Plan A costs ", cA);
    printf("%s %.2f\n", "Plan B costs ", cB);

    if (cA < cB)
    {
        cout << "Plan A is cheapest.";
    }
    else if (cB < cA)
    {
        cout << "Plan B is cheapest.";
    }
    else if (cA == cB)
    {
        cout << "Plan A and B are the same price.";
    }
}