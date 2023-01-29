#include<stdio.h>
int fact(int);
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",fact(a));
	return 0;
}
int fact(int a)
{
	if(a==1)
		return 1;
	else 
		return fact(a-1)*a;
}
