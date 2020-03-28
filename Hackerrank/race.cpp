#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int height[n], i, max;
    for (i = 0; i < n; i++)
    {
        cin >> height[i];
        max = height[0];
    }
    for (i = 1; i < n; i++)
    {
        if (height[i] > max)
        {
            max = height[i];
        }
    }
    if (max > k)
    {
        cout << max - k;
    }
    else
    {
        cout << 0;
    }

    return 0;
}