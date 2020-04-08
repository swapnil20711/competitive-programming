#include <iostream>
using namespace std;
int main()
{
    long long int n, r, t, test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        long long int cnt = 0;
        cin >> n;
        t = n;
        while (n > 0)
        {
            r = n % 10;
            if (r != 0)
            {
                if (t % r == 0)
                    cnt++;
            }
            n /= 10;
        }
        cout << cnt << endl;
    }

    return 0;
}