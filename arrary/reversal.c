#include <stdio.h>
int main()
{
	int number, i;
	scanf("%d", &number);
	int a[number];
	for (i = 0; i < number; i++)
		scanf("%d", &a[i]);
	for (int j = 0; j < number; j++)
	{
		i--;
		printf("%d ", a[i]);
	}
	return 0;
}
