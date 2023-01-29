#include <stdio.h>
#define N 5
int main()
{
    int i, a[N] = {1, 1, 2, 3, 2}, num = 1, j = 0;
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    printf("Enter your number that you want to find:");
    scanf("%d", &num);
    for (i = 0; i < N; i++)
        if (num == a[i])
            j++;
    if (j > 0)
        printf("you have enterd number this %d times\n", j);
    return 0;
}
