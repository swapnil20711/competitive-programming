#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        char a[N];
        int i;
        for (i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (i = 0; i < N; i++)
        {
            if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
            {
                if (a[i + 1] == 'a' || a[i + 1] == 'e' || a[i + 1] == 'i' || a[i + 1] == 'o' || a[i + 1] == 'u')
                {
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}