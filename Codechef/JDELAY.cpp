#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        int i;
        cin >> N;
        int cnt = 0;
        for (i = 0; i < N; i++)
        {
            int si, ji;
            cin >> si;
            cin >> ji;
            if (ji - si > 5)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}