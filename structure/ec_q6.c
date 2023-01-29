/*6. Write a program to read names and phone numbers into a structure array. Request a name
and print the person’s phone number. Enter at least 5 records.*/
#include<stdio.h>
#include<string.h>
#define n 3
typedef struct phone_number_info
{
	char name[20];
	int num;
}info;
void scan(info a[])
{
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i].name);
		scanf("%d",&a[i].num);
	}
}
void search(info a[],char name[])
{
	int flag=1;
	for(int i=0;i<n;i++)
		if(strcmp(a[i].name,name)==0)
		{
			printf("%d\n",a[i].num);
			flag=0;
			break;
		}
	if(flag)
		printf("name cannot be found\n");
}
int main()
{
	info a[n];
	scan(a);
	char name[20];
	scanf("%s",name);
	search(a,name);
	return 0;
}
