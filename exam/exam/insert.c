#include <stdio.h>
int main()
{
	int n;
	printf("Enter the length of array : ");
	scanf("%d", &n);
	int a[n],b[n+1],temp;
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int n1, ind;
	printf("\nentre the value you want to enter : ");
	scanf("%d", &n1);
	printf("enter the position number : ");
	scanf("%d", &ind);

	for (int i = 0; i < n + 1; i++)
		if (i < ind)
			b[i] = a[i];

		else if (i == ind)
			b[i] = n1;

		else
			b[i] = a[i - 1];

	for (int i = 0; i < n + 1; i++)
		printf("\n element %d is %d ", i + 1, b[i]);
}
