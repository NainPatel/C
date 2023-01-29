#include<stdio.h>

typedef struct result
{
	int id;
	char name[100];
	int m[3],tm;
}result;

int main()
{	

	int n;
	int i;
	scanf("%d",&n);
	result a[n];

	for(i=0;i<n;i++)
	{
		printf("enter your id:");
		scanf("%d",&a[i].id);
		printf("enter the stu. name:");
		scanf("%s",a[i].name);
		printf("enter the three marks\n");
		for(int j=0;j<3;j++)
		{
			printf("enter '%d' :",j+1);
			scanf("%d",&a[i].m[j]);
		}
	}

	for(i=0;i<n;i++)
	{
		a[i].tm=0;
		for(int j=0;j<3;j++)
			a[i].tm+=a[i].m[j];
	}

	int max=0,index;
	for(i=0;i<n;i++)
		if(max<a[i].tm)
		{
			max=a[i].tm;
			index=i;
		}
	printf("%d %s %d ",a[index].id,a[index].name,a[index].tm);
	return 0;
}
