#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> friends;
    vector<int> nFriends;
    int fNum = 0, rounds, rem;
    scanf("%d", &fNum);
    for (int i = 0; i < fNum; i++)
    {
        friends.push_back(i + 1);
    }
    scanf("%d", &rounds);

    for (int i = 0; i < rounds; i++)
    {
        scanf("%d", &rem);
        nFriends.clear();
        for (int j = 0; j < friends.size(); j++)
        {

            if ((j + 1) % rem != 0)
            {
              int z = friends.at(j);
              nFriends.push_back(z);
              //cout << friends.at(j) << endl;
            }
        }
        friends.clear();

        for(int x: nFriends){
          //cout << x << endl;
          friends.push_back(x);
        }

    }
    for (int x : friends)
    {
        cout << x << "\n";
    }
    return 0;
}
