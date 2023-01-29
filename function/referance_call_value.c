#include<stdio.h>
int number(int);
int main()
{
	int x=5;
	printf("your number is (main) --%d\n",x);
	printf("your number is (main) --%d\n\n\n",number(x));
	return 0;
}
int number(int a)
{
	printf("your number is (fuction) --%d\n",a);
	a=10;
	printf("your number is (fuction) --%d\n",a);
	return a;
}
