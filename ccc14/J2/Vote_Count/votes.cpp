#include <iostream>
#include <string>

int main()
{
    int s = 0, a = 0, b = 0;
    std::cin >> s;
    std::string v;
    std::cin >> v;
    for (char const &c : v)
    {
        if (c == 'A')
            a++;
        else if (c == 'B')
            b++;
    }
    if (a > b)
    {
        std::cout << "A";
    }
    else if (b > a)
    {
        std::cout << "B";
    }
    else
    {
        std::cout << "Tie";
    }
    return 0;
}