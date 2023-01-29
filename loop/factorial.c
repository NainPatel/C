#include<stdio.h>
int main()
{
    int number,fact=1;
    printf("Enter your num:");
    scanf("%d",&number);
    while (number!=0)
    {
        fact=fact*number;
        number--;
    }
    printf("your factorial is %d",fact);
}