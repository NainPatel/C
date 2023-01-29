#include<stdio.h>
int sum(int a)
{
	if(a==1)
		return 1;
	else
		return sum(a-1)+a;
}
int main()
{
	printf("%d\n",sum(3));
	return 0;
}
