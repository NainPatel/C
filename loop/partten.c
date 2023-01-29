#include <stdio.h>
int main()
{
    int star, row, number;
    printf("Enter your number:");
    scanf("%d", &number);
    for (row = 0; row < number; row++)
    {
        for (star = 0; star <= row; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}