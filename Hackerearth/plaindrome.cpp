#include <iostream>
using namespace std;
int main()
{
    string s;
    int l, i;
    getline(cin, s);
    l = s.length();
    for (i = 0; i <= l / 2; i++)
    {
        if (s[i] != s[l - 1 - i])
        {
            cout << "NO";
            break;
        }
        if (i == l / 2)
        {
            cout << "YES";
        }
    }

    return 0;
}