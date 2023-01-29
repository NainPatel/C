/* 3).Write a program to print maximum marks in each subject along with the name of the student
by using structures. Take 3 subjects and 3 student records and show the use of array of structure*/
#include<stdio.h>
#define n 3
typedef struct marks
{
	char name[20];
	int marks[3];
}marks;
void print(marks *p)
{
	for(int i=0;i<n;i++)
	{
		printf("%s\n",(p+i)->name);
		for(int j=0;j<3;j++)
			printf("%d\n",&(p+i)->marks[j]);
	}
}
int main()
{
	marks a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%[^\n]",(a+i)->name);
		printf("%s\n",((a+i)->name));
		for(int j=0;j<3;j++)
		{
			scanf("%d",&((a+i)->marks[j]));
			printf("%d\n",((a+i)->marks[j]));
		}
		getchar();
	}
	print(a);
	return 0;
}
