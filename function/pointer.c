#include<stdio.h>
int main()
{
	int x=10,*b=&x;
	printf("your number is %d",x);
	*b=20;
	printf("your pointer is %d",*b);
	return 0;
}
