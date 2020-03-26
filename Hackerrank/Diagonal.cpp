#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0, j, a[n][n], d1 = 0, d2 = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (i == j)
            {
                d1 += a[i][j];
            }
            if (i == n - j - 1)
            {
                d2 += a[i][j];
            }
        }
    }
    cout << abs(d2 - d1);
    return 0;
}