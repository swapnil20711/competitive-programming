#include <iostream>
using namespace std;
int main()
{
    int a[3], b[3], i = 0, as = 0, bs = 0;
    for (i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    for (i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            as++;
        }
        else if (a[i] == b[i])
        {
            continue;
        }

        else
        {
            bs++;
        }
    }
    cout << as << " " << bs;
    return 0;
}