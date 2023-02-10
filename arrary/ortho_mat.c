#include<stdio.h>
void scan(int n,int (*p)[n])
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",(*(p+i)+j));
}

int* trans(int n,int (*p)[n])
{
	int b[n][n];
	int (*q)[n];
	q=b;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			*(*(q+i)+j) = *(*(p+j)+i);
	return q;
}

int check(int n,int (*p)[n] ,int (**q)[n])
{
	int a[n][n];
	int (*r)[n];
	r=a;
	int sum,j=0;
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
			for(int k=0;k<n;k++)
				sum += *(*(p+i)+k)* *(**(q+k)+j);
		*(*(r+i)+j)=sum;
	}
	int flag=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i==j)
				if(*(*(r+i)+j)!=1)
				{
					flag++;
					break;
				}
			else
				if(*(*(r+i)+j)!=0)
				{
					flag++;
					break;
				}
	if(flag)
		return 0;
	else
		return 1;

}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	int *p=a;
	scan(n,p);
	int **q=trans(n,p);
	int i=check(n,p,*q);
	if(i)
		printf("ortho\n");
	else
		printf("not ortho\n");
	return 0;
}
