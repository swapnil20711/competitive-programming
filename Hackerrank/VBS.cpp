#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int ar[n], i = 0, sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    cout << sum;
    return 0;
}