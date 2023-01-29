#include<stdio.h>
#include<string.h>
char str(char *x,char *y)
{
	strcpy(*y,*x);
}
}int main()
{
	char a[]="nian";
	char b[5];
	str(a,b);
	printf("%s",b);
	return 0;
}
