#include <iostream>
int main()
{
    int x, y, z, t;
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    t = x + y + z;
    if (x == 60 && y == 60 && z == 60)
    {
        std::cout << "Equilateral";
    }
    else if (t == 180 && (x == y || x == z || z == y))
    {
        std::cout << "Isosceles";
    }
    else if (t == 180 && (x != y && x != z && y != z))
    {
        std::cout << "Scalene";
    }
    else if (t != 180)
    {
        std::cout << "Error";
    }
    return 0;
}