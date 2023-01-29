#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],sum[3][3]={0};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);		
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);		
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				sum[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d ",sum[i][j]);
		printf("\n");
	}
	return 0;
}
