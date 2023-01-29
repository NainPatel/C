#include<stdio.h>
int main()
{
	int max,min,i,t; 
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++) 
		scanf("%d",&a[i]);
	max=a[0];
	min=a[0];
	for(i=0;i<t;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
	}
	printf("min: %d \nmax:%d ",min,max);
	return 0;
}
