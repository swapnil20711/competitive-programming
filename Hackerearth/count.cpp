#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    string s;
    while (t--)
    {
        int count = 0;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case 'A':
                count++;
                break;
            case 'E':
                count++;
                break;
            case 'I':
                count++;
                break;
            case 'O':
                count++;
                break;
            case 'U':
                count++;
                break;
            case 'a':
                count++;
                break;
            case 'e':
                count++;
                break;
            case 'i':
                count++;
                break;
            case 'o':
                count++;
                break;
            case 'u':
                count++;
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}