#include <iostream>
using namespace std;
int main()
{
    string s;
    int i = 0, sum = 0;
    cin >> s;
    for (i = 0; i < s.length(); i++)
    {
        sum += s[i] - 96;
    }
    cout << sum;
    return 0;
}