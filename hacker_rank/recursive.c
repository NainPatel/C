#include<stdio.h>
int rec(int n)
{
  	static int a=1;
	printf("%d ",a);
	if(a<5)
		return 0;
	else
		return rec(a+1);
}
int main()
{
	rec(5);
	return 0;
}
