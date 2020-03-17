#include <iostream>
// Hackerearth Zoos problem
using namespace std;
int main()
{
    string s;
    int i, countz = 0, counto = 0;
    getline(cin, s);
    for (i = 0; i < s.length(); i++)
    {

        switch (s[i])
        {
        case 'z':
            countz++;
            break;

        case 'o':
            counto++;
            break;
        }
    }
    if((counto)==(2*countz))
    {
        cout<<"Yes";
    }
    else 
    {
        cout<<"No";
    }
    
    return 0;
}