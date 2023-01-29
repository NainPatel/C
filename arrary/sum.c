#include<stdio.h>
int main()
{
	int number,sum=0;
	scanf("%d",&number);
	int a[number];
	for(int i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
