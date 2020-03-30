#include <iostream>
using namespace std;
void reverseArray(int a[], int n)
{
    int start = 0, end = n - 1, temp;
    while (start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    reverseArray(a, n);
    printArray(a, n);
    return 0;
}