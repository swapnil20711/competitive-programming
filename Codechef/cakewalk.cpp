#include <iostream>
using namespace std;
int main()
{
    int time[10][10];
    int t;
    int i, j;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                cin >> time[i][j];
                if (time[i][j] <= 30)
                {
                    cnt++;
                }
            }
        }
        if (cnt >= 60)
        {
            cout << "yes"
                 << "\n";
        }
        else
        {
            cout << "no"
                 << "\n";
        }
    }
    return 0;
}