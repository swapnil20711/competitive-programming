#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll N;
    int cnt = 0;
    cin >> N;
    while (N != 0)
    {
        N /= 10;
        cnt++;
    }
    if (cnt <= 3)
    {
        cout << cnt;
    }
    else
    {
        cout << "More than 3 digits";
    }

    return 0;
}