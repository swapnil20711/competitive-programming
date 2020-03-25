#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 7, f, p, q;
    long n;
    cin >> n;
    while (n--)
    {
        cin >> f;
        p = abs(a - f);
        q = abs(b - f);
        if (p <= q)
        {
            a = f;
            cout << "A" << endl;
        }
        else
        {
            b = f;
            cout << "B" << endl;
        }
    }
    return 0;
}