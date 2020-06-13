/*
    Link to the problem
    https://codeforces.com/contest/282/problem/A
*/
#include <iostream>
#include <string.h>
using namespace std;
int calc(int t)
{
    int i, x = 0;
    string s;
    while (t--)
    {
        cin >> s;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == '+' && s[i + 1] == '+')
            {
                x++;
            }
            if (s[i] == '-' && s[i + 1] == '-')
            {
                x--;
            }
        }
    }
    return x;
}
int main()
{

    int t,result;
    cin >> t;
    result=calc(t);
    cout<<result;
    return 0;
}