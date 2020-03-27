#include <iostream>
using namespace std;
int main()
{
    int t,i;
    string s;
    cin >> t;
    getchar();
    while (t--)
    {   int count=0;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
        }
    cout << count << endl;
    }
    return 0;
}