#include<stdio.h>
typedef union nain
{
	int age;
	char name[20];
}nain;
int main()
{
	//here order will be follows the last {} member will be ini.
	nain n1={.age=2,.name="nain"};
	printf("%s",n1.name);
	return 0;
}

