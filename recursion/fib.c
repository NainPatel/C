#include<stdio.h>
int fib(int a,int b,int c)
{
	int static count =0;
	if(count ==c)
		return 0;
	else 
	{
		count++;
		printf("%d ",b);
		return fib(b,b+a,c);
	}
}
int main()
{
	fib(0,1,4); 
}
