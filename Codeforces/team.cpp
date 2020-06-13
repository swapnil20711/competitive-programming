/*
   Link to the problem statement
   https://codeforces.com/problemset/problem/231/A
*/
#include <iostream>
using namespace std;
int win = 0;
int main()
{
    int n, i, j;
    cin >> n;
    int a[n][3];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        int cursum = 0;
        for (j = 0; j < 3; j++)
        {
            cursum += a[i][j];
            if (cursum >= 2)
            {
                win++;
                break;
            }
        }
    }
    cout << win;
}