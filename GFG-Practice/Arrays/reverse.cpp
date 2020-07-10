#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int N, i;
    while (T--)
    {
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        for (int i = N - 1; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}