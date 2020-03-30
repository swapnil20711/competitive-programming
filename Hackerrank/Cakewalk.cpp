#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n, sum = 0, j = 0;
    cin >> n;
    long int calorie[n], i;
    for (int i = 0; i < n; i++)
    {
        cin >> calorie[i];
    }
    sort(calorie, calorie + n);
    for (int i = n - 1; i >= 0; i--)
    {
        sum = sum + ((long)(calorie[i] * pow(2, j)));
        j++;
    }
    cout << sum;

    return 0;
}