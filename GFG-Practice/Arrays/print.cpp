#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int n, tofind, i;
    while (T--)
    {
        cin >> n;
        cin>>tofind;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << a[tofind]<<endl;
    }
    return 0;
}