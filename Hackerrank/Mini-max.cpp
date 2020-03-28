#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    ll a[5], i = 0, sum = 0;
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll min = a[0], max = min;

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
    cout << sum - max << " " << sum - min;
    return 0;
}
