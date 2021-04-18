#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
int l1, l2, l3, steps;
std::string rule1;
std::string rule1out;
std::string rule2;
std::string rule2out;
std::string rule3;
std::string rule3out;
std::string start;
std::string end;
std::set<std::string> visited;
std::vector<std::string> arr;
std::vector<std::string> retArr;
std::vector<std::string> DivideAndConquer(std::string z)
{
    int size = z.length();
    for (int i = 0; i < size; i++)
    {
        if (i + l1 <= z.length() && z.length() >= l1 && z.substr(i, i + l1) == rule1)
        {
            std::cout << "1 " + std::to_string(i + 1) + " " + z.substr(0, i) + rule1out + z.substr(i + l1, size) << "\n";
            arr.push_back("1 " + std::to_string(i + 1) + " " + z.substr(0, i) + rule1out + z.substr(i + l1, size));
        }
        if (i + l2 <= z.length() && z.length() >= l2 && z.substr(i, i + l2) == rule2)
        {
            std::cout << "2 " + std::to_string(i + 1) + " " + z.substr(0, i) + rule2out + z.substr(i + l2, size) << "\n";
            arr.push_back("2 " + std::to_string(i + 1) + " " + z.substr(0, i) + rule2out + z.substr(i + l2, size));
        }
        if (i + l3 <= z.length() && z.length() >= l3 && z.substr(i, i + l3) == rule3)
        {
            std::cout << "3 " + std::to_string(i + 1) + " " + z.substr(0, i) + rule3out + z.substr(i + l3, size) << "\n";
            arr.push_back("3 " + std::to_string(i + 1) + " " + z.substr(0, i) + rule3out + z.substr(i + l3, size));
        }
    }
    std::cout << "----" << std::endl;
    return arr;
}

std::vector<std::string> recursive(std::vector<std::string> strings, std::string s, int count)
{
    std::string test = s;
    std::cout << s << std::endl;
    if (count > steps || visited.find(test.append(std::to_string(count))) != visited.end())
    {
        return strings;
    }
    if (strings.size() > 0 && std::find(strings.begin(), strings.end(), end) != strings.end())
    {
        strings.push_back(s);
        return strings;
    }
    std::string t = " ";
    if (count == 0)
    {
        t = s;
    }
    if (count != 0)
    {
        t = s.substr(s.find_last_of(" ") + 1);
    }
    if (t == end && count == steps)
    {
        strings.push_back(s);
        return strings;
    }
    retArr.clear();
    retArr = DivideAndConquer(t);
    for (std::string x : retArr)
    {
        std::string z = x;
        //std::cout << x << std::endl;
        strings = recursive(strings, x, (count + 1));
        if (strings.size() > 0 && strings.front() == end)
        {
            strings.push_back(s);
            return strings;
        }
        else
        {
            visited.insert(z.append(std::to_string(count)));
        }
    }
    test = s;
    visited.insert(test.append(std::to_string(count)));
    return strings;
}
int main()
{
    std::cin >> rule1;
    std::cin >> rule1out;
    std::cin >> rule2;
    std::cin >> rule2out;
    std::cin >> rule3;
    std::cin >> rule3out;
    l1 = rule1.length();
    l2 = rule2.length();
    l3 = rule3.length();
    std::cin >> steps;
    std::cin >> start;
    std::cin >> end;
    std::vector<std::string> output;
    std::cout << std::endl;
    for (std::string x : recursive(output, start, 0))
    {
        std::cout << "Hello" << std::endl;
    }
    return 0;
}
