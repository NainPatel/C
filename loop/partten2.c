
/*1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
    int row,number,num,temp;
    printf("Enter your name:");
    scanf("%d",&number);
    for(row=0;row<number;row++)
    {
        temp=1;
        for(num=0;num<=row;num++)
        printf("%d",temp++);
    printf("\n");
    }
    return 0;
}