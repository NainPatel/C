#include<stdio.h>
int print(int a)
{
	if(a==0)
		return 1;
	else
	{
		printf("%d\n",a);
		return print(a-1);
	}
}
int main()
{
	int a=5;
	print(a);
}
