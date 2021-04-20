#include <iostream>

using namespace std;

int main()
{
    float h, w, b;
    cin >> w;
    cin >> h;
    b = w / (h * h);

    if (b < 18.5)
    {
        cout << "Underweight";
    }
    else if (b > 25)
    {
        cout << "Overweight";
    }
    else
    {
        cout << "Normal weight";
    }
}