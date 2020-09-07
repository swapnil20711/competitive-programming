#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll N, i;
        cin >> N;
        int cmp;
        int A[N], cnt = 1;
        for (i = 0; i < N; i++)
        {
            cin >> A[N];
        }
        sort(A, A + N);
        for (i = 0; i < N - 1; i++)
        {
            if (A[i] + 1 != A[i + 1])
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}