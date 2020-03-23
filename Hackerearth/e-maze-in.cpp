#include <iostream>
using namespace std;
int main()
{
    string s;
    int i, x = 0, y = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'L':
            x--;
            break;
        case 'R':
            x++;
            break;
        case 'U':
            y++;
            break;
        case 'D':
            y--;
            break;
        }
    }
    cout<<x<<" "<<y;
        return 0;
    }