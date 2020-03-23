#include <iostream>
using namespace std;
int main()
{
    int N, fact = 1;
    cin >> N;
    while (N > 0)
    {
        fact *= N;
        N--;
    }
    cout << fact;

    return 0;
}