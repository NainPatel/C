#include <stdio.h>
int main()
{
    int num =2012;
    printf("Enter your num:");
    scanf("%d", &num);
    for (int i = 0; i < 4; i++)
    {
        num++;
        for (num;1 ; num++)
        {
            if (num % 4 == 0)
            {
                printf("%d", num);
                break;
            }
        }
        printf("  ");
    }
    return 0;
}