#include <iostream>
using namespace std;
int main()
{
    int n, v, i;
    cin >> v;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == v)
        {
            cout << i;
            break;
        }
    }
    return 0;
}