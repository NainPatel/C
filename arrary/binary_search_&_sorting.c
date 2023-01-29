#include <stdio.h>
#define N 8
int main()
{
	int a[N], i, temp, number;
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	printf("your array with out sorting:");
	for (i = 0; i < N; i++)
		printf("%d  ", a[i]);
	for (i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n\narry taht have binan sort:");
	for (i = 0; i < N; i++)
		printf("%d  ", a[i]);
	printf("\nenter ther the number that you want to search for:");
	scanf("%d", &number);
	if (number == a[4])
	{
		number = 4;
		printf("\nyour number is in %d index and num is %d", number, a[number]);
	}
	else if (number < a[4])
	{
		for (i = 3; i != -1; i--)
		{
			if (number == a[i])
			{
				number = i;
			printf("\nyour number is in %d index and num is %d", number, a[number]);
			}
		}
	}
	else if (number > a[4])
	{
		for (i = 5; i < 8; i++)
		{
			if (number == a[i])
			{
				number = i;
			printf("\nyour number is in %d index and num is %d", number, a[number]);
			}
		}
	}
	else
		printf("\n!!your number is not in this array");
	return 0;
}