#include <iostream>
using namespace std;
int main()
{
    long long int a[5], i = 0, sum = 0;
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
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
    cout << sum;
    cout << sum - max << " " << sum - min;
    return 0;
}
