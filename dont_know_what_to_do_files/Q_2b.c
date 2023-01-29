#include<stdio.h>
int main()
{
    int row,number,num;
    scanf("%d",&number);
    number*=2;
    if(number>0)
    {
        for(row=0;row<number;row++)   
        {
            for(num=0;num<=row;num++)
            {
                if(row%2==0)
                printf("1");
                else
                printf("2");
            }
            printf("\n");
        }
    }
    else{
        printf("your num is 0 try 1,2,3");
    }
}