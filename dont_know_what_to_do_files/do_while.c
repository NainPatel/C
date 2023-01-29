#include <stdio.h>
int main()
{
    int number, choice;
    printf("numb:");
    do
    {
        scanf("%d", &number);      //this code wrong
        if (number % 2 == 0)
        {
            printf("even");
            printf("\n");
        }
        else
        {
            printf("odd");
            printf("\n");
        }
        scanf("%c", &choice);
    } while (choice == ');
    return 0;
}
