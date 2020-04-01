#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int n, t, i;
    cin >> t;
    getchar();
    while (t--)
    {
        long long int sumn = 0, sums = 0, sumc = 0;
        cin >> n;
        getchar();
        for (int i = 1; i <= n; i++)
        {
            sumn += i;
        }
        for (int i = 1; i <= n; i++)
        {
            sums += i * i;
        }
        for (int i = 1; i <= n; i++)
        {
            sumc += i * i * i;
        }
        cout << sumn << " " << sumn * 2 << ""
             << " " << pow(n, 2) << " " << sums << " " << sumc;
    }

    return 0;
}