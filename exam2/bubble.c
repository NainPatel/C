#include<stdio.h>
void sort(int a[],int);
void print(int a[],int);
int main()
{
	int a[5]={2,5,8,1,0};
	int size=sizeof(a)/sizeof(a[0]);
	print(a,size);
	sort(a,size);
	print(a,size);
	return 0;
}
void sort(int a[],int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
		for(j=0;j<size-i-1;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
}
void print(int a[],int size)
{
	for(int i=0;i<size;i++)
		printf("%d ",a[i]);
	printf("\n");
}
