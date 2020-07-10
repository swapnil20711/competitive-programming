#include <iostream>
using namespace std;
int main()
{

    int T, N, i;
    cin >> T;
    while (T--)
    {
        int sum=0;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}