#include <stdio.h>
int main()
{
	int temp, t, a[100] = {0}, index, number;
	printf("how many input:");
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
		scanf("%d", &a[i]);
	
	//for deleting element

	printf("enter the index:"); 
	scanf("%d", &index);
	a[index] = 0;
	for (int i = index; i < t - (index - 1); i++)
	{
		temp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = temp;
	}
	for (int i = 0; i < t-1; i++)
		printf("%d  ", a[i]);
	printf("\n");

	// for inserting element
	
	printf("enter the index number and the number:"); 
	scanf("%d%d", &index, &number);
	for (int i = t - 1; i > index + 1; i--)
	{
		temp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = temp;
	}
	a[index] = number;
	for (int i = 0; i < t; i++)
		printf("%d  ", a[i]);
	return 0;
}
