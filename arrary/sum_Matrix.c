#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sum[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("a%d%d=",i+1,j+1);
            scanf("%d",&a[i][j]);
            printf("b%d%d=",i+1,j+1);
            scanf("%d",&b[i][j]);
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            {
                printf("%d ",sum[i][j]);
                if(j==2)
                printf("\n");
            }
    }
    return 0;
}