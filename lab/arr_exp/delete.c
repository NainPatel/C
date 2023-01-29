#include<stdio.h>
int main()
{
	//this code is wrong
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int b[n-1];
	int in;
	printf("enter the element that you want to delete:");
	scanf("%d",&in);
	for(int i=0;i<n-1;i++)
	{
		if(i<in)
			b[i]=a[i];
		if(i==in || i<in)
			b[i]=a[i+1];
	}
	for(int i=0;i<n-1;i++)
		printf("%d ",b[i]);
}
