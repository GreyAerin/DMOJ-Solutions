#include <iostream>
#include <string>

int main()
{
    int s;
    int d = 100, a = 100;
    std::string roll;
    std::cin >> s;
    for (int i = 0; i < s; i++)
    {
        std::cin >> roll;
        if ((int)roll[0] > (int)roll[2])
        {
            d = d - roll[2];
        }
        else if ((int)roll[0] < (int)roll[2])
        {
            a = a - roll[0];
        }
    }
    std::cout << d << std::endl;
    std::cout << a;
    return 0;
}