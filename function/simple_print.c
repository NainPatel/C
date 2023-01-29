#include<stdio.h>
#include<string.h>
char fav_m(char);
void print();
int main()
{
	char name[10];
	gets(name);
	print();
	fav_m(name);
	print();
	return 0; 
}
void print()
{
	for(int i=0;i<18;i++)
		printf("=");
}
char fav_m(char a[10])
{
	printf("%s\n",&a[0]);
	return a;
}
