#include <iostream>
using namespace std;
int main()
{
    int len, breadth;
    int a, p;
    cin >> len >> breadth;
    a = (len * breadth);
    p = 2 * (len + breadth);
    if (a > p)
    {
        cout << "Area"
             << "\n";
        cout << a;
    }
    else if (a == p)
    {
        cout << "Eq"
             << "\n";
        cout << a;
    }
    else if (a < p)
    {
        cout << "Peri"
             << "\n";
        cout << p;
    }
    return 0;
}