#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int n1, ind;

	for (int i = 0; i < n; i++)
		printf("\n element %d is %d ", i + 1, a[i]);

	printf(" \nenter the position  to delet: ");
	scanf("%d",&ind);

	if(ind<n)
	{
		int b[n - 1];
		for (int i = 0; i < n - 1; i++)
		{
			if (i < ind - 1)
			{
				b[i] = a[i];
			}
			else if (i >= ind - 1)
			{
				b[i] = a[i + 1];
			}
		}
		for (int i = 0; i < n - 1; i++)
			printf("\n element %d is %d ", i + 1, b[i]);
	}
	else
		printf("Element is not in array\n");
}
