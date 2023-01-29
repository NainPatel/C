#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]={"hello"};
	char b[10]={"bye"};
	char temp[10];
	printf("string a[]=%s\n",&a[0]);
	printf("string b[]=%s\n",&b[0]);
	strcpy(temp,a);
	strcpy(a,b);
	strcpy(b,temp);
	printf("string a[]=%s\n",&a[0]);
	printf("string b[]=%s\n",&b[0]);
	return 0;
}
