#include<stdio.h>
void trans(int a[][3]);
void print(int a[][3]);
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	print(a);
	trans(a);
	printf("\n");
	print(a);
	/*	int temp;
		for(i=0;i<3;i++)
		for(int j=0;j<3;j++)
		scanf("%d",&a[i][j]);	for(i=0;i<3;i++)
		{
		for(int j=0;j<3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
		}
		for(int j=0,i=0;j<3;j++,i++)
		{
		temp=a[j][i];
		a[j][i]=a[i][j];
		a[i][j]=temp;
		}
		for(i=0;i<3;i++)
		for(int j=0;j<3;j++)
		printf("%d ",a[i][j]);
		printf("\n");*/
	return 0;
}
void print(int a[][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
void trans(int a[][3])
{
	int temp;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
}
