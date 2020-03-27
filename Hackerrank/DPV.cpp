
#include <iostream>
using namespace std;
int main()
{
    int h[26], i, sum = 1, max, l;
    string s;
    for (int i = 0; i < 26; i++)
    {
        cin >> h[i];
    }
    getchar();
    getline(cin, s);
    max = h[int(s[0]) - 97];
    for (int i = 0; i < s.length(); i++)
    {
        if (max < h[int(s[i]) - 97])
        {
            max = h[int(s[i]) - 97];
        }
    }
    l = s.length();
    sum *= max * l;
    cout << sum;

    return 0;
}