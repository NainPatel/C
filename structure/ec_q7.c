/*Create a structure ‘date’ with objects day, month and year. Write a program that asks for two
dates and returns -1 if d1 comes before d2, 0 if d1 is the same as d2, and 1 if d1*/
#include<stdio.h>
typedef struct date
{
	int day;
	int month;
	int year;
}date;
int check(date d1,date d2)
{
	if(d1.year>d2.year)
		return -1;
	if(d1.year<d2.year)
		return 1;
	if(d1.month>d2.month)
		return -1;
	if(d1.month>d2.month)
		return 1;
	if(d1.day>d2.day)
		return -1;
	if(d1.day<d2.day)
		return 1;
	return 0;
}
int main()
{
	date d1,d2;
	scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
	scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
	printf("%d %d %d\n",d1.day,d1.month,d1.year);
	printf("%d %d %d\n",d2.day,d2.month,d2.year);
	printf("%d",check(d1,d2));
	return 0;
}
