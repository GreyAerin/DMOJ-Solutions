#include <iostream>
#include <string>
using namespace std;

int main()
{
    char in[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> in[i];
    }
    if (in[0] == '9' || in[0] == '8')
    {
        if (in[1] == in[2])
        {
            if (in[3] == '8' || in[3] == '9')
            {
                cout << "ignore";
            }
            else
            {
                cout << "answer";
            }
        }
        else
        {
            cout << "answer";
        }
    }
    else
    {
        cout << "answer";
    }
}