/*5.) Write a program to read 10 records of students and find out how many of them have passed. The fields are students roll-no, name, mark and result. Evaluate the result as follows
If marks > 35 then Result => “pass” 
Else Result => “fail”*/
#include<stdio.h>
#define n 3
typedef struct student
{
	int mark[3];
	int result;
}stu;
void scan(stu *p)
{
	for(int i=0;i<3;i++)
	{
		int total=0;
		for(int j=0;j<3;j++)
		{
			scanf("%d",&(p+i)->mark[j]);
			total += (p+i)->mark[j];
		}
		(p+i)->result = total;
	}
}
void print(stu *p)
{
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<3;i++)
			printf("%d\n",(p+j)->mark[i]);
		printf("result:%d\n",(p+j)->result);
	}
}
void check(stu *p)
{
	for(int j=0;j<3;j++)
		if((p+j)->result > 35)
			printf("PASS\n");
		else
			printf("fail\n");
}
int main()
{
	stu a[n];
	scan(a);
	print(a);
	check(a);
	return 0;
}


	
