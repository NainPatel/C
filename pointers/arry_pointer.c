#include<stdio.h>
int main()
{
	int a[2][3]={1,2,3,4,5,6};
	int (*p)[3]=a;
	printf("%d ",p);
}
