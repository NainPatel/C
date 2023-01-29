/*. Write a program to accept records of different states using array of structures. The structure
should contain name of the state, population, literacy rate, and average income. Store at least 3
records and display the name of state whose literacy rate is highest and whose population is
highest.*/
#include<stdio.h>

typedef struct states_info
{
	char name[20];
	int pop;
	float lit_rate;
	float avg_income;
}info;

void scan(info *p)
{
	for(int i=0;i<3;i++)
	{
		scanf("%[^\n]",(p+i)->name);
		printf("name:%s\t",(p+i)->name);
		scanf("%d",&(p+i)->pop);
		printf("pop:%d\t",(p+i)->pop);
		scanf("%f",&(p+i)->lit_rate);
		printf("rate:%f\t",(p+i)->lit_rate);
		scanf("%f%*c",&(p+i)->avg_income);
		printf("income:%f\t\n",(p+i)->avg_income);
	}
	
}

void print(info *p)
{	for(int i=0;i<3;i++)
	{
		printf("name:%s\t",(p+i)->name);
		printf("pop:%d\t",(p+i)->pop);
		printf("rate:%f\t",(p+i)->lit_rate);
		printf("income:%f\t\n",(p+i)->avg_income);
	}
}

int* popfun(info *p)
{
	static int max=0;
	for(int i=0;i<3;i++)
		if(max<=(p->pop))
			max=(p->pop);
	return &max;
}

int* litfun(info *p)
{
	static int max=0;
	for(int i=0;i<3;i++)
		if(max<=(p->lit_rate))
			max=(p->lit_rate);
	return &max;
}

int main()
{
	int *max_pop;
	info a[3];
	scan(a);
	max_pop = popfun(a);
	int *max_lit;
	max_lit=litfun(a);
	print(a);
	printf("max pop is :%d ,\n max lit_rate is %d \n ", *max_pop,*max_lit);
	return 0;
}
