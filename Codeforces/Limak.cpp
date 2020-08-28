/*Link to the problem https://codeforces.com/contest/791/problem/A*/
#include <iostream>
using namespace std;
int main()
{
    int l, b, cnt = 0;
    cin >> l >> b;
    while (l <= b)
    {
        l *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt;

    return 0;
}