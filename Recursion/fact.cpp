#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
    {
        return n; //base condition
    }
    return n * factorial(n - 1); //recursive call
}
int main()
{
    int n, fact;
    cout << "Enter the number " << endl;
    cin >> n;
    fact = factorial(n);
    cout << fact;
    return 0;
}