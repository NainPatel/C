#include<stdio.h>
typedef struct nain
{
	int a[3];
}nain;
int main()
{
	nain a[3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&a[i].a[j]);
	printf("\n\n");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			printf("a[%d][%d]=%d\n",i,j,a[i].a[j]);
}
