#include <iostream>
using namespace std;
int main()
{
    long int n, i;
    cin >> n;
    long int a[n], max = a[0], count = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}