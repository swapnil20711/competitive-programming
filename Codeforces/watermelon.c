#include <stdio.h>
int main()
{
    int w;
    scanf("%d", &w);
    if (w >= 1 && w <= 100)
    {
        if (w > 2 && w % 2 == 0)
        {
            printf("Yes");
        }
        else

            printf("No");
    }
    return 0;
}