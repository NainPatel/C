#include<stdio.h>
int main()
{
	union emp
	{
		float salary;
		double all;
	};
	struct person
	{
		char name[20];
		unsigned a:4;
		unsigned h:6;
		union emp x;
	}p[100];
	printf("%d ",sizeof(p));
	return 0;
}	
