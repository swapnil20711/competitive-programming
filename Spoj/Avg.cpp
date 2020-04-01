#include <iostream>
using namespace std;
int main()
{
    int n, i, avg = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> n;
        avg += n;
    }
    cout << (avg) / n;
    return 0;
}