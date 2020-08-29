#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        int i;
        int sum = 0;
        cin >> N;
        int a[N];
        for (i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        sort(a, a + N);
        for (i = 0; i < N; i++)
        {
            if (a[i] == a[i + 1])
            {
                continue;
            }
            sum += a[i];
        }
        cout << sum<<"\n";
    }
    return 0;
}