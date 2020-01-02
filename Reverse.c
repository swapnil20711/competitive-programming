// hackerrank array reverse
#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    unsigned long a[N];
    for(i=0;i<N;i++)
    {
        scanf("%llu",&a[i]);
    }
        for(i=N-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}