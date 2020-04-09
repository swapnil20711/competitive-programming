//To find product of maximum three numbers in an array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n], i;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[n - 1] * a[n - 2] * a[n - 3];
    return 0;
}