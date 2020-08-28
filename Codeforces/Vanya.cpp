/*Link to the problem https://codeforces.com/contest/677/problem/A*/
#include <iostream>
using namespace std;

int main()
{
    int N;
    int hf;
    int i;
    cin >> N;
    cin >> hf;
    int a[N];
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < N; i++)
    {
        if (a[i] <= hf)
        {
            s++;
        }
        else if (a[i] > hf)
        {
            s = s + 2;
        }
    }
    cout << s;
}