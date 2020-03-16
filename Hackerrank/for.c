
//Hackerrank For Loop in C
#include<stdio.h>
int main()
{
    int a,b,n;
    char* r[11]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d %d",&a,&b);
    for(n=a;n<=b;n++)
    {
        if(n>=0 && n<=9)
        {
            printf("%s",r[n]);
        }
        else
        { 
            if(n%2==0)
            {
                printf("even");
            }
            else
            {
                printf("odd");
            }

        } printf("\n");
    }
        return 0;
}