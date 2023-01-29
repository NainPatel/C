#include<stdio.h>
int main()
{
	int x=5;
	int *y=&x;
	int **z;
	z=&y;
	printf("%d\n",*z);
	printf("%d ",&x);
}
