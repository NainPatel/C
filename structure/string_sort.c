#include<stdio.h>
void print(char *(p)[3])
{
	for(int i=0;i<3;i++)
		printf("%s\n",*(p+i));
}
int main()
{
	char *p[3]={"nain","mahesh","pal"};
	print(p);
	return 0;
}
