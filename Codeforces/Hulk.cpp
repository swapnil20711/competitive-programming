#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    string oddFeeling = "I hate ";
    string evenFeeling = "I love ";
    string midEnding = "that ";
    string last = "it";
    string result = "";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result += evenFeeling;
        }
        else
        {
            result += oddFeeling;
        }
        if (i == n)
        {
            result += last;
        }
        else
        {
            result += midEnding;
        }
    }
    cout << result;

    return 0;
}