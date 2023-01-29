#include<stdio.h>
#include<math.h>
#define N 1000
int main()
{
    int i,sum=0,binary,a[N];
    for(i=0;i!=EOF;i++)
        scanf("%d",&a[i]);
    for( ;i!=-1;i--)
    {
        if(a[i]==1)
        sum+=pow(2,i);
    }
    printf("%d",sum);
    return 0;
}