#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n+1];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\nenter your index number:");
	int index,num;
	scanf("%d",&index);
	printf("enter the number:");
	scanf("%d",&num);
	for(int i=0;i<n+1;i++)
	{
		if(i<index)
			b[i]=a[i];
		else if(i==index)
			b[index]=num;
		else
			b[i]=a[i-1];
	}
	for(int i=0;i<n+1;i++)
		printf("%d ",b[i]);
	return 0;
}
