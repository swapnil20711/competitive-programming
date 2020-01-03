//Hackerrank sum of five digits problem
#include<stdio.h>
int main()
{
    unsigned long n;
    int i,r,sum=0;
    scanf("%ul",&n);
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}