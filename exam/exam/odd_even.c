#include<stdio.h>
void scan(int a[],int );
void check(int [],int [],int [],int);
void print(int [],int [],int);
int main()
{
	int size;
	scanf("%d",&size);
	int a[size],odd[size],even[size];
	scan(a,size);
	check(a,odd,even,size);
	print(odd,even,size);
	return 0;
}
void scan(int a[],int size)
{
	for(int i=0;i<size;i++)
		scanf("%d",&a[i]);
}
void check(int a[],int odd[],int even[],int size)
{
	for(int i=0;i<size;i++)
	{
		if(a[i]==0)
		{
			printf("%c",0);
		}
		else if(a[i]%2==0)
			even[i]=a[i];
		else
			odd[i]=a[i];
	}
}
void print(int odd[],int even[],int size)
{
	for(int i=0;i<size;i++)
		if(odd[i]!=0)
			printf("%d ",odd[i]);
	for(int i=0;i<size;i++)
		if(even[i]!=0)
			printf("%d ",even[i]);
}

