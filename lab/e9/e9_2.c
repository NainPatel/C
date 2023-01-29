#include<stdio.h>
typedef struct product
{
	int id,price;
	char name[100];
}pro;
int main()
{
	int n=2;
	pro a[n];
	a[0]={123,2000,"nain"};
	a[1]={213,1000,"nain2"};
	printf("enter id:");
	int search;
	int index;
	scanf("%d",&search);
	for(int i=0;i<n;i++)
		if(a[i].id==search)
		{
			index=i;
			break;
		}
	printf("%d %s %d ",a[index].id,a[index].name,a[index].price);
	return 0;
}
