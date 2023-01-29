#include <stdio.h>
int main()
{
    int i = 0, number, remender, a[1000];
    printf("enter your num:");
    scanf("%d", &number);
    while (number)
    {
        a[i] = number % 2;
        i++;
        number /= 2;
    }
    for (int j = i; j !=0; j--)
    {   
        i--;
        printf("%d", a[i]);
    }
    return 0;
}