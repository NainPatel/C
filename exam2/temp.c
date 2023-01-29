#include<stdio.h>
union 
{
	int n1;
	int n2;
}n;
int main()
{
	n.n1=10;
	printf("%d",n.n2);	
}

