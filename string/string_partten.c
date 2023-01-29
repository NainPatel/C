#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int x,i,j,k;
	gets(a);
	x=strlen(a);
	for(i=0;i<x;i++)
	{
		for(j=0;j<=i;j++)
			printf("%c",a[j]);
		printf("\n");
	}
	for(i=0;i<x;i++)
	{
		k=0;
		for(j=x;j!=i;j--)
		{
			printf("%c",a[k]);
			k++;
		}
		printf("\n");
	}
	return 0;
}
