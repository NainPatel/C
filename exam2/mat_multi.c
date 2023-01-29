#include<stdio.h>

void multi(int a[][3],int b[][3],int mul[][3]);
void scan(int a[][3],int b[][3]);
void print(int a[][3],int b[][3]);
void print2(int a[][3]);

int main()
{
	int a[3][3],b[3][3],mul[3][3]={0};
	scan(a,b);
	print(a,b);
	multi(a,b,mul);
	print2(mul);
	return 0;
}

void multi(int a[][3],int b[][3],int mul[][3])
{
	for(int k=0;k<3;k++)
		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++)
				mul[k][i]+=a[k][j]*b[j][i];
}

void scan(int a[][3],int b[][3])
{
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d %d",&a[i][j],&b[i][j]);
}

void print(int a[][3],int b[][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",b[i][j]);
		printf("\n");
	}
}

void print2(int mul[][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d ",mul[i][j]);
		printf("\n");
	}
}
