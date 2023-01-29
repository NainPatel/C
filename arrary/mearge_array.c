#include <stdio.h>
#define N 100
int main()
{
	int a[N], b[N], m[N], i, n;
	scanf("%d", &n);
	printf("for a:");

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("for b:");
	for (i = 0; i < n; i++)
		scanf("%d", &b[i]);

	for (i = 0; i < n; i++)
		m[i] = a[i];

	for (int j = (2 * n) - 1; j > i; j--)
		m[j] = b[j];

	for (i = 0; i < (2 * n) - 1; i++)
		printf("%d\n", m[i]);
	return 0;
}
