#include <iostream>
using namespace std;
int main()
{
    long n;
    int i, k;
    cin >> n;
    long a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    for (i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout << i;
            break;
        }
    }

    return 0;
}