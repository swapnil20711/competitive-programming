#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, i, sum = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        sum += pow(i, 2);
    }
    cout << sum;
    return 0;
}