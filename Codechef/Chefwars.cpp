#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int H, P;
        cin >> H >> P;
        int flag = 1;
        while (H - P > 0)
        {
            H -= P;
            P /= 2;
            if (P == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}