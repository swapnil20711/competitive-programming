#include <iostream>
using namespace std;
int LinearSearch(int A[], int n, int x)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int T, N, I, X,Arr[100];
    cin >> T;

    while (T--)
    {
        cin >> N;
        for (int I = 0; I < N; I++)
        {
            cin >> Arr[I];
        }
        cin >> X;
        LinearSearch(Arr, N, X);
    }
    cout << LinearSearch(Arr, N, X);

    return 0;
}