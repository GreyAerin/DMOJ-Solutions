#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string, string> words;
    words["CU"] = "see you";
    words[":-)"] = "I'm happy";
    words[":-("] = "I'm unhappy";
    words[";-)"] = "wink";
    words[":-P"] = "stick out my tongue";
    words["(~.~)"] = "sleepy";
    words["TA"] = "totally awesome";
    words["CCC"] = "Canadian Computing Competition";
    words["CUZ"] = "because";
    words["TY"] = "thank-you";
    words["YW"] = "you're welcome";
    words["TTYL"] = "talk to you later";
    string in;
    while (cin >> in && in != "TTYL")
    {

        if (words.find(in) != words.end())
        {
            cout << words[in] << endl;
        }
        else
        {
            cout << in << endl;
        }
    }
    cout << words["TTYL"];
    return 0;
}