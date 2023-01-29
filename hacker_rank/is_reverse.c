#include<stdio.h>
int is_reverse(int a[],int b[],int n)
{
	int agent=0;
	int j;
	for(int i=0,j=n-1;i<n;i++,j--)
		if(a[i]!=b[j])
		{
			agent++;
			break;
		}
	if(agent==0)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		scanf("%d",&b[i]);
	printf("%d",is_reverse(a,b,n));
	return 0;
}
