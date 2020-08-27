#include <iostream>
using namespace std;
bool CheckPrime(int num)
{
    int rem;
    int i;
    if (num == 1)
    {
        return false;
    }
    for (i = 2; i * i <= num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int i, j;
    bool isPrime = true;
    int t;
    cin >> t;
    int m, n;
    while (t--)
    {
        cin >> m >> n;
        for (i = m; i <= n; i++)
        {
            isPrime = CheckPrime(i);
            if (isPrime)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}