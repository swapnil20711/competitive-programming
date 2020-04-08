#include <iostream>
using namespace std;
int main()
{
    int n, UniqueElement = 0;
    cin >> n;
    int a[n], i;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        UniqueElement ^= a[i];
    }
    cout << UniqueElement;
    return 0;
}