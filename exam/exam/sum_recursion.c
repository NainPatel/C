#include<stdio.h>
int sum(int a)
{
	if(a==1)
		return 1;
	else
		return (sum(a-1)+a);
}
int main()
{
	int x=100;
	printf("%d",sum(x));
	return 0;
}
