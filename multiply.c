#include <stdio.h>
int main ()
{
    int A, B;
    scanf("%d %d", &A, &B);
    long long result = (long long) A * B;
    printf("%lld\n", result);
    return 0;
}
