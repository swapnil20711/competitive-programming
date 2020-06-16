/*
  Link to given problem
  https://codeforces.com/problemset/problem/200/B
*/
#include <stdio.h>
int main()
{
    int n, sum = 0.0;
    scanf("%d",&n);
    int a[n];
    int i;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("%0.4f",(double)sum/(double)n);
    return 0;
}