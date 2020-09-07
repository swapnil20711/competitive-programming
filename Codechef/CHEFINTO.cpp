#include <iostream>
using namespace std;
int main()
{
    int T, R;
    cin >> T;
    cin >> R;
    while (T--)
    {
        int N;
        cin >> N;
        if (N < R)
        {
            cout << "Bad boi"
                 << "\n";
        }
        else
        {
            cout << "Good boi"
                 << "\n";
        }
    }
    return 0;
}