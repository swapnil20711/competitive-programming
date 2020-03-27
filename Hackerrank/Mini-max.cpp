#include <iostream>
// Code ran but 1 test case failed 
using namespace std;
int main()
{
    long long int a[5], i = 0, mins = 0, maxs = 0;
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    long long int min = a[0], max = min;

    for (i = 1; i < 5; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        if (max < a[i])
        {
            max = a[i];
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (a[i] == min)
        {
            continue;
        }
        else
        {
            maxs += a[i];
        }
    }
    for (i = 0; i < 5; i++)
    {

        if (a[i] == max)
        {
            continue;
        }
        else
        {
            mins += a[i];
        }
    }
    cout << mins << " " << maxs;
    return 0;
}