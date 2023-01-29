#include<stdio.h>
void rev(int a[],int n)
{
	int j,temp;
	for(int i=0,j=n-1;i<n/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	rev(a,n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
