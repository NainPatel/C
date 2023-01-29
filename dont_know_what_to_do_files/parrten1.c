#include<stdio.h>
int main()
{
	int number,row,alpha1;
	printf("num:");
	scanf("%d",&number);
	for(row=number;row !=0;row--)
	{
		char alpha='A';
		for(alpha1=0;alpha1<=row;alpha1++)
			printf("%c",alpha++);
		printf("\n");
	}
	return 0;
}
