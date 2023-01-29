#include<stdio.h>
typedef struct school
{
	int std;
	char name[20];
	struct class
	{
		int roll;
		int no[3];
	}c1;
}school;
int main()
{
	school s1;
	for(int i=0;i<3;i++)
		scanf("%d",&s1.c1.no[i]);
	for(int i=0;i<3;i++)
		printf("%d\n",s1.c1.no[i]);
}

