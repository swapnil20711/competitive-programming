#include <iostream>
using namespace std;
int main()
{
    int n, l, i, j;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (l = 0; l < n - i; l++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}