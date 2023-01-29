#include<stdio.h>
int main()
{
	int row,space,numb,star;
	printf("num");
	scanf("%d",&numb);
	for (row = 0; row < numb; row++)
	{
		for(space=numb;space !=row;space--)
		{
			printf(" ");
		}
		for(star=0;star<=row;star++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0; 
}
