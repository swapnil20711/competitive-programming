#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        ll X;
        cin >> N >> X;
        ll A[N];
        int i;
        int flag = 0;
        for (i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (i = 0; i < N; i++)
        {
            if (A[i] >= X)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}