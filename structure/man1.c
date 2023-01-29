/*

1) Generate a result table which consists of student id, student name, marks of three subject 
and total marks. Write a program which takes input for ten students and displays result 
table. Also display student information separately who got the highest total.

*/
#include<stdio.h>
#define n 10
typedef struct student
{
	int id;
	char name[20];
	int marks[3];
	int total;
}stud;
void scan(stud a[])
{
	for(int i=0;i<n;i++)
	{
		scanf("%d%*c",&a[i].id);
		scanf("%s",a[i].name);
		for(int j=0;j<3;j++)
			scanf("%d",&a[i].marks[j]);
		a[i].total=a[i].marks[0]+a[i].marks[1]+a[i].marks[2];
	}
}
void print(stud a[])
{
	printf("id\tname\tpps\tmaths\tbee\ttotal\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i].id);
		printf("%s\t",a[i].name);
		for(int j=0;j<3;j++)
			printf("%d\t",a[i].marks[j]);
		printf("%d\n",a[i].total);
	}
}

int* check(stud a[])
{
	static int index=0;
	int max=0;
	for(int i=0;i<n;i++)
		if(a[i].total>max)
			index=i;
	return &index;
}

int main()
{
	stud s[n];
	int *p;
	scan(s);
	print(s);
	p=check(s);
	printf("max marks student\nid:%d\nname:%s\npps:%d\nmaths:%d\nbee:%d\ntotal:%d\n",s[(*p)].id,s[(*p)].name,s[(*p)].marks[0],s[(*p)].marks[1],s[(*p)].marks[2],s[(*p)] 	.total);
	return 0;
}
