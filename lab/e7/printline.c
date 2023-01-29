#include<stdio.h>
void printline(int);
int main()
{
	printline(81);
	printf("\n");
	return 0;
}
void printline(int a)
{
	for(int i=0;i<a;i++)
		printf("=");
}