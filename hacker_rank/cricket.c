#include<stdio.h>
#include<string.h>
typedef struct cricket
{
	char name[20];
	char team[20];
	int avg;
}cricket;
void sort(cricket a[],int n)
{
	cricket temp;
	for(int i=0;i<n-1;i++)
		for(int j=i;j<n;j++)
			if(strcmp(a[i].team,a[j].team)>0)
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
	cricket a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i].name);
		scanf("%s",a[i].team);
		scanf("%d",&a[i].avg);
	}
	sort(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%s  %s %d\n",a[i].name,a[i].team,a[i].avg);
	}
	return 0;
}
