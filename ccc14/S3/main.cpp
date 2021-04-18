#include <iostream>
#include <stack>

using namespace std;

int main()
{
    bool flag = true;
    stack<int> in;
    stack<int> sd;
    int t, n, c, o = 1;
    cin >> t >> n;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> c;
            in.push(c);
        }

        while (flag)
        {
            if (in.size() > 0)
            {
                if (in.top() == o)
                {
                    in.pop();
                    if (o == 4)
                    {
                        o = 1;
                    }
                    else
                    {
                        o++;
                    }
                }
                else
                {
                    sd.push(in.top());
                    in.pop();
                }
            }
            else
            {
                if (sd.top() == o)
                {
                    sd.pop();
                    if (o == 4)
                    {
                        o = 1;
                    }
                    else
                    {
                        o++;
                    }
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
    }
}