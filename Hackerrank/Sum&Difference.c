// Sum & difference hackerrank problem
#include<stdio.h>
int main()
{
    int a,b;
    double c,d;
    scanf("%d %d",&a,&b);
    scanf("%lf %lf",&c,&d);
    printf("%d %d\n",a+b,a-b);//To print sum in int
    printf("%0.1lf %0.1lf",c+d,c-d);
    return 0;
}
