#include<stdio.h>
#include<math.h>
int main()
{
    int remender,binary,i,sum=0;
    scanf("%d",&binary);
    for(i=0;binary!=0;i++)
    {
        remender=binary%10;
        binary/=10;
        if(remender==1)
            sum=sum+pow(2,i);
    }
    printf("%d",sum);
    return 0;
}