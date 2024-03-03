#include <stdio.h>
int main ()
{
    int N;
    scanf("%d", &N);

    if(N >= 1500)
    {
        printf("I will buy punjabi\n");
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
    }
    else if(N > 1000)
    {
         printf("I will buy punjabi\n");
    }
    else if(N > 500)
    {
         printf("Bad luck!\n");
    }
    else
        {
         printf("Bad luck!\n");
        }
    return 0;
}
