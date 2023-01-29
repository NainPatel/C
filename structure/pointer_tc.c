#include<stdio.h>
typedef union nain
{
	int age;
	char a;
}nain;
int main()
{
	nain n1={98};
	printf("%c",n1.a);
	return 0;
}
