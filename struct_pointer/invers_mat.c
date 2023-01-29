//code is about A^-1
#include<stdio.h>
void print(int n, int a[][n])
{
	for(int i=0 ;i <n;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
void scan(int n,int a[][n])
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
int* det(int n, int a[][n])
{
	static int det;
	det =((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))
		 -((a[1][0]*a[2][2] - (a[2][0]*a[1][0]))
		 +((a[1][0]*a[2][1]) - (a[2][0]*a[1][1]));
	return &det;
}
void adj(int n, int a[][n])
{


