#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int i, wordCnt = 1;
    for (i = 0; i < s.length(); i++)
    {
        if (int(s[i]) >= 65 && int(s[i]) <= 90)
        {
            wordCnt++;
        }
    }
    cout << wordCnt;
    return 0;
}