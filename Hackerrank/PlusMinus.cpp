#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], i;
    double pos, neg, z;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            pos++;
        }
        else if (a[i] == 0)
        {
            z++;
        }
        else
        {
            neg++;
        }
    }
    cout << (pos / n)<<endl;
    cout << (neg / n)<<endl;
    cout << (z / n)<<endl;

    return 0;
}