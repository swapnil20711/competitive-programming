/* 
Time complexity O(n*n)
*/
#include <iostream>
using namespace std;
bool isUnique(string s)
{
    int i;
    int j;
    for (i = 0; i < s.length(); i++)
    {
        for (j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string s;
    bool check;
    cin >> s;
    check = isUnique(s);
    if (check)
    {
        cout << "String " << s << " contains unique characters";
    }
    else
    {
        cout << "String " << s << " does not contains unique characters";
    }
    return 0;
}