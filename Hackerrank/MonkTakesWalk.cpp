#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int T, i;
    string s;
    cin >> T;
    getchar();
    while (T--)
    {   int count = 0;
        getline(cin, s);
        for (i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}