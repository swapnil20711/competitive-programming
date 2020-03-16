#include <stdio.h>
// Hackerearth Monk and Welcome Problem 
int main()
{
    int i;
    long N;
    scanf("%ld", &N);
    long A[N], B[N], C[N];
    for ( i = 0; i < N; i++)
    {
        scanf("%ld", &A[i]);
    }
    for ( i = 0; i < N; i++)
    {
        scanf("%ld", &B[i]);
    }
    for ( i = 0; i < N; i++)
    {
        C[i] = A[i] + B[i];
        printf("%ld ", C[i]);
    }

    return 0;
}