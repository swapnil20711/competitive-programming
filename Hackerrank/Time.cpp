#include <iostream>
#include <string>
using namespace std;
int main()
{
    string hs[12] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};
    string ms[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quater", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};
    int h, m;
    cin >> h >> m;
    if (m == 0)
    {
        cout << hs[h - 1] << " o' clock";
    }
    else if(m==45)
    {
        cout<<"quarter to "<<hs[h];
    }
    else if(m==30)
    { 
        cout<<"half past "<<hs[h-1];

    }
    else if (m < 30)
    {
        if (m == 15)
        {
            cout << "quarter past " << hs[h - 1];
        }
        else if (m == 1)
        {
            cout << "one minute past " << hs[h - 1];
        }
        else
        {
            cout << ms[m - 1] << " minutes past " << hs[h - 1];
        }
    }
    else
    {
        if (m > 30)
        {
            cout << ms[59 - m] << " minutes to " << hs[h];
        }
    }

    return 0;
}