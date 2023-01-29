#include<stdio.h>
int fact(int);
int main()
{
	int x;
	scanf("%d",&x);
	printf("your fact is %d ",fact(x));
	return 0;
}
int fact(int a)
{
	int multi=1;
	for(int i=a;i>1;i--)
		multi*=i;
	return multi;
}
