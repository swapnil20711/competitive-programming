#include <iostream>
using namespace std;
int main()
{
    int t, len, i;
    cin >> t;
    getchar();
    string s;
    while (t--)
    {
        getline(cin, s);
        len = s.length();
        for (int i = 0; i < len / 2;)
        {
            cout << s[i];
            i += 2;
        }
        cout << endl;
    }
    return 0;
}