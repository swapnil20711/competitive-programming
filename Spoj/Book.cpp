#include <iostream>
using namespace std;
int main()
{
    int t, m, n;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        if (n % m == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}