#include<stdio.h>
#include<string.h>
int main()
{
	char a[][20]={{"A"},{"C"},{"H"},{"D"}};
	char temp[20];
	int i,j;
	for(i=0;i<4-1;i++)
		for(j=i;j<4;j++)
		{
			if(strcmp(a[i],a[j])<0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	for(i=0;i<4;i++)
		printf("%s\n",&a[i]);
	return 0;
}
