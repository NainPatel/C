#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int s;
	scanf("%d",&s);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(s==a[i]+a[j])
			{
				printf("%d%d",i,j);
				break;
			}
	return 0;
}
