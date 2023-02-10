#include<stdio.h>
int main()
{
	int a[5]={4,3,2,7,9},temp;
	for(int i=0;i<5-1;i++)
		for(int j=i+1;j<5;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	for(int i=0;i<5;i++)
		printf("%d ",a[i]);
	return 0;
}
