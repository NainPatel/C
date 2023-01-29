/*
ABCDEFGHIJK
ABCDE GHIJK
ABCD   HIJK
ABC     IJK
AB       JK
A         K
*/
#include <stdio.h>
int main()
{
	int space, row, alpah, num = 5;
		char abc = 'A';
	//	printf("enter num:");
	// scanf("%d",&num);
	for (alpah = num * 2 + 1; alpah != 0; alpah--)
		printf("%c", abc++);
	printf("\n");
	for (row = 0; row < num; row++)
	{
		char abc = 'A';
		char abc2 = 'A';
		for (alpah = 0; alpah < num - row; alpah++, abc++)
			printf("%c", abc);
		for (space = 0; space <= row * 2; space++)
			printf(" ");
		for (alpah = 0; alpah < num - row; alpah++, abc--)
			printf("%c", abc);
		printf("\n");
	}
	return 0;
}
