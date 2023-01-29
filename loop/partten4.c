/*
1
22
333
4444
55555
*/
#include <stdio.h>
int main()
{
    int row, number, num, space, temp;
    printf("Enter your number:");
    scanf("%d", &number);
    temp = number;
    for (row = 0; row < number; row++)
    {
        temp--;
        for (space = temp; space != 0; space--)
            printf(" ");
        for (num = 0; num <= row; num++)
            printf("%d", row + 1);
        printf("\n");
    }
    return 0;
}