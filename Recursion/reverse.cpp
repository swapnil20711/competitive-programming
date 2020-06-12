#include <iostream>
using namespace std;
void strrev(string str, int len)
{
    if (len >= 0)
    {   
        cout <<str[len];
    }
    len--;
    strrev(str,len);
}
int main()
{
    string s;
    int l;
    getline(cin, s);
    l = s.length();
    strrev(s, l-1);
    return 0;
}