#include<stdio.h>
int main()
{
	int x=200;
	int *p=&x;
	printf("%d ",&x);
	//printf("%d ", *(char*)p);
	printf("%d ",p+1);
}
