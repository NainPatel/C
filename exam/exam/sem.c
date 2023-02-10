#include<stdio.h>
void multi(int a[][N],int b[][N],N);
int main()
{
	int N;
	scanf("%d",&N);
	int a[N][N],b[N][N],multi[N][N];
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			scanf("%d",&b[i][j]);
	multi(a,b,multi,N);
	return 0;
}
void multi(int a[][N],int b[][N],N)
{
	for(int k=0;k<N;k++)
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)
				multi[][]=a[][]*b[][];	
}
