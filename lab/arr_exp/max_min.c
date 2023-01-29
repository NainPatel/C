#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	int max, min, temp1, temp2, temp;
	max = min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			temp1 = i;
		}
		if (min > a[i])
		{
			min = a[i];
			temp2 = i;
		}
	}
	printf("\nmax is :%d\nmin is :%d\n",max, min);
	temp = a[temp1];
	a[temp1] = a[temp2];
	a[temp2] = temp;
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
