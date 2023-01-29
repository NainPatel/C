#include <stdio.h>
int main()
{
	int a[3][3];
	int t, flag = 0, sum[3], sum1[3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("[%d],[%d]", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				sum[k] += a[j][i];
				sum1[k] += a[i][j];
			}
		}
		if ((sum[k] == sum1[k]) && (a[0][0] + a[1][1] + a[2][2] == sum[k]) && (a[2][0] + a[2][1] + a[2][2] == sum1[k]))
		{
			flag++;
		}
	}
/*	for (int k = 0; k < 3; k++)
	{
		if ((sum[k] == sum1[k]) || (a[0][0] + a[1][1] + a[2][2] != sum[k]) || (a[2][0] + a[2][1] + a[2][2] != sum1[k]))
		{
			flag++;
			break;
		}
	}*/
	if (flag == 0)
		printf("your sqare is magic sqare\n");
	else
		printf("not a magic sqare\n");
}
