/*
Value equal to index value
*/
#include <iostream>
using namespace std;
int main()
{
    int T, i;
    cin >> T;
    while (T--)
    {
        int N, flag = 0;
        cin >> N;
        int a[N];
        for (int i = 1; i <= N; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= N; i++)
        {
            if (a[i] == i)
            {
                flag = 1;
                cout << i << " ";
                continue;
            }
        }
        if (flag == 0)
        {
            cout << "Not Found";
        }
        cout << endl;
    }
    return 0;
}