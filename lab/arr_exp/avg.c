#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("sum of numbers: %d\n",sum);
	printf("Your avg number is :%f\n",sum*(1.0)/n);
	return 0;
}
