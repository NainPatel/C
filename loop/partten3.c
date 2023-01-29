/*
    *
   * *
  * * *
 * * * *
* * * * *

*/
#include <stdio.h>
int main()
{
    int number, row, star, space,temp;
    printf("Enter your numbmer:");
    scanf("%d", &number);
    temp=number;
    for (row = 0; row < number; row++)
    {
        temp--;
        for (space = temp; space!=0; space--)
            printf(" ");
        for (star = 0; star <= row; star++)
            printf("* ");
        printf("\n");
    }
    return 0;
}