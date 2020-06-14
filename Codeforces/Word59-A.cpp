/*
    Link to the problem
    https://codeforces.com/problemset/problem/59/A
*/

#include <iostream>
using namespace std;
int main()
{
    string s;
    int Lcnt = 0, Ucnt = 0;
    getline(cin, s);
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if ((int)s[i] >= 65 && (int)s[i] <= 90)
        {
            Ucnt++;
        }
        if ((int)s[i] >= 97 && (int)s[i] <= 122)
        {
            Lcnt++;
        }
    }
    for (i = 0; i < s.length(); i++)
    {
        if (Lcnt == Ucnt)
        {
            if ((int)s[i] >= 65 && (int)s[i] <= 90)
            {
                s[i] += 32;
            }
        }
        else if (Lcnt > Ucnt)
        {
            if ((int)s[i] >= 60 && (int)s[i] <= 90)
            {
                s[i] += 32;
            }
        }
        else
        {
            if ((int)s[i] >= 97 && (int)s[i] <= 122)
            {
                s[i] -= 32;
            }
        }
    }
    cout << s;
}