#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], count = 0, i;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n;)
    {
        if (a[i] == a[i + 1])
        {
            count++;
            i += 2;
        }
        else
        {
            i++; //It will increase value if a[i]!=a[i+1]
        }
    }
    cout << count;
    return 0;
}