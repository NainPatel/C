#include<stdio.h>
void section(int a[],int size);
void print(int a[],int size);
int main()
{
	int size;
	scanf("%d",&size);
	int a[size];
	for(int i=0;i<size;i++)
		scanf("%d",&a[i]);
	section(a,size);
//	print(a,size);
	for(int i=0;i<size;i++)
		printf("%d ",a[i]);
	return 0;
}
void section(int a[],int size)
{
	int temp;
	for(int i=0;i<size-1;i++)
		for(int j=i+1;j<size;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}
/*void print(int a[],int size)
{
	for(int i=0;i<size;i++)
		printf("%d ",a[i]);
}*/
